/*
---------------------------------------------------------------------------------------------
  
     SSSSS  U    U  DDDD     OOOO   K    K  U    U
    S       U    U  D   D   O    O  K   K   U    U
     SSSS   U    U  D    D  O    O  KKKK    U    U
         S  U    U  D   D   O    O  K   K   U    U
    SSSSS    UUUU   DDDD     OOOO   K    K   UUUU
  
    « SUDOKU » DE L'ARCADE MAGIQUE: ÉDITION CONSOLE COLORÉE
    CODE PROTOTYPE
  
    modifié le 11 novembre 2026
    June Sugg

---------------------------------------------------------------------------------------------
*/

// Suppress MSVC security warnings
#define _CRT_SECURE_NO_WARNINGS

// Include the required headers
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>
#include "locales/locale.h"

// Platform-specific headers (Windows / macOS, Linux)
#ifdef _WIN32
#include <windows.h>
#include <conio.h>
#ifndef ENABLE_VIRTUAL_TERMINAL_PROCESSING
#define ENABLE_VIRTUAL_TERMINAL_PROCESSING 0x0004
#endif
#else
#include <termios.h>
#include <unistd.h>
#endif


/*-------------------------------------------------------------------------------------------
    Macros
-------------------------------------------------------------------------------------------*/
// ANSI escape codes
#define ANSI_RESET                 "\033[0m"
#define ANSI_BOLD                  "\033[01m"
#define ANSI_ITALIC                "\033[3m"
#define ANSI_UNDERLINE             "\033[4m"
#define ANSI_INVERT                "\033[7m"
#define ANSI_STRIKEOUT             "\033[9m"
#define ANSI_COLOR_BLACK           "\033[30m"
#define ANSI_COLOR_RED             "\033[31m"
#define ANSI_COLOR_GREEN           "\033[32m"
#define ANSI_COLOR_YELLOW          "\033[33m"
#define ANSI_COLOR_BLUE            "\033[34m"
#define ANSI_COLOR_MAGENTA         "\033[35m"
#define ANSI_COLOR_CYAN            "\033[36m"
#define ANSI_COLOR_WHITE           "\033[37m"
#define ANSI_COLOR_RESET           "\033[39m"
#define ANSI_COLOR_GRAY            "\033[90m"
#define ANSI_COLOR_BG_BLACK        "\033[40m"
#define ANSI_COLOR_BG_RED          "\033[41m"
#define ANSI_COLOR_BG_GREEN        "\033[42m"
#define ANSI_COLOR_BG_YELLOW       "\033[43m"
#define ANSI_COLOR_BG_BLUE         "\033[44m"
#define ANSI_COLOR_BG_MAGENTA      "\033[45m"
#define ANSI_COLOR_BG_CYAN         "\033[46m"
#define ANSI_COLOR_BG_WHITE        "\033[47m"
#define ANSI_COLOR_BG_RESET        "\033[49m"
#define ANSI_COLOR_BG_ALL_BLACK    "\033[40m\033[2J\033[1;1H"
#define ANSI_COLOR_BG_ALL_RED      "\033[41m\033[2J\033[1;1H"
#define ANSI_COLOR_BG_ALL_GREEN    "\033[42m\033[2J\033[1;1H"
#define ANSI_COLOR_BG_ALL_YELLOW   "\033[43m\033[2J\033[1;1H"
#define ANSI_COLOR_BG_ALL_BLUE     "\033[44m\033[2J\033[1;1H"
#define ANSI_COLOR_BG_ALL_MAGENTA  "\033[45m\033[2J\033[1;1H"
#define ANSI_COLOR_BG_ALL_CYAN     "\033[46m\033[2J\033[1;1H"
#define ANSI_COLOR_BG_ALL_WHITE    "\033[47m\033[2J\033[1;1H"
#define ANSI_BOLD_REMOVE           "\033[22m"
#define ANSI_ITALIC_REMOVE         "\033[23m"
#define ANSI_UNDERLINE_REMOVE      "\033[24m"
#define ANSI_INVERT_REMOVE         "\033[27m"
#define ANSI_STRIKEOUT_REMOVE      "\033[29m"

// System
#define FLAG_GAMESTOP    1
#define FLAG_GAMEERROR   404
#define DIFF_EASY        1
#define DIFF_NORMAL      2
#define DIFF_HARD        3
#define GIVENS_EASY      40     // Number of givens shown at the start (target)
#define GIVENS_NORMAL    32
#define GIVENS_HARD      26
#define INPUT_COORDINATE 1
#define INPUT_CURSOR     2

// Others
#define SEED_BY_TIME 1
#define SEED_CUSTOM 2


/*-------------------------------------------------------------------------------------------
    Enums
-------------------------------------------------------------------------------------------*/
// Menu list
typedef enum {
    INIT = 0,
    SETMODE,
    SEED,
    SETTINGS,
    INGAME,
} Menu;


/*-------------------------------------------------------------------------------------------
    Structs
-------------------------------------------------------------------------------------------*/
// Cursor
typedef struct Cursor {
    uint32_t currrent_menu;
    uint32_t pos;
} Cursor;

// Coordinates
typedef struct Coordinates {
    uint16_t x;
    uint16_t y;
} Coordinates;

// Cell
typedef struct Cell {
    uint8_t answer;
    uint8_t value;
    bool given;
    bool wrong;
} Cell;

// Game
typedef struct Game {
    unsigned int seed;

    int moves;
    int hints_used;
    int givens;
    bool revealed;
    bool finished;

    Cell grid[9][9];
    Coordinates latest_pos;
} Game; 

// User
typedef struct User {
    char* name;
    uint32_t id;

    unsigned char *avatar_buf;
    size_t avatar_size;
    unsigned int avatar_id;
    unsigned int symbol;
    unsigned int emoji;
    unsigned int color;
} User;

// Setting
typedef struct Setting {
    int diff;
    uint8_t ctrl_mode;
    bool show_border;
} Setting;


/*-------------------------------------------------------------------------------------------
    Global Variables
-------------------------------------------------------------------------------------------*/
// File pointer
FILE* fp = NULL;

// Language
Locale locale = KO_KR;

// Caches for the generator
// *_used[row/column/subgrid index][number 0-9, index 0 unused]; cell_used is [column][row][number]
bool row_used    [9][10] = {{false}};
bool column_used [9][10] = {{false}};
bool subgrid_used[9][10] = {{false}};
bool cell_used[9][9][10] = {{false}};

// User initialization
User user = {
    NULL,       // char* name
    1001,       // uint32_t id
    NULL,       // unsigned char *avatar_buf
    0,          // size_t avatar_size
    0,          // unsigned int avatar_id
    0,          // unsigned int symbol
    0,          // unsigned int emoji
    0           // unsigned int color
};

// Statistics only (no direct effect on gameplay)
unsigned int count_backtrack = 0;




/*
---------------------------------------------------------------------------------------------

    1.
    SYSTEM FUNCTIONS

---------------------------------------------------------------------------------------------
*/
/*-------------------------------------------------------------------------------------------
    1-1. Uncategorized
-------------------------------------------------------------------------------------------*/
// Clear the screen
void clear_screen() {
    printf("\033[2J\033[H");
}

/* --- End of 1-1 --- */


/*-------------------------------------------------------------------------------------------
    1-2. Windows Only
-------------------------------------------------------------------------------------------*/
static void enable_ansi(void) {
#ifdef _WIN32
    // Make older Windows consoles interpret ANSI escape codes as well
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD mode = 0;
    if (h != INVALID_HANDLE_VALUE && GetConsoleMode(h, &mode)) {
        SetConsoleMode(h, mode | ENABLE_VIRTUAL_TERMINAL_PROCESSING);
    }
#endif
}
/* --- End of 1-2 --- */


/*-------------------------------------------------------------------------------------------
    1-3. Key Input
-------------------------------------------------------------------------------------------*/
#ifdef _WIN32
void key_init() {}
void key_end() {}
int key_get() {
    int c;
    if (!_kbhit()) return 0;
    c = _getch();
    if (c == 0 || c == 224) {
        switch (_getch()) { case 72: return 'U'; case 80: return 'D';
                            case 75: return 'L'; case 77: return 'R'; }
        return 0;
    }
    return c;
}
#else
static struct termios orig;

void key_init() {
    struct termios t;
    tcgetattr(0, &orig); t = orig;

    // Turn off ICANON and ECHO; keep ISIG on so Ctrl+C still works
    t.c_lflag &= ~(ICANON | ECHO);

    // Non-blocking: read() returns immediately even if no key is pressed
    t.c_cc[VMIN] = 0; t.c_cc[VTIME] = 0;

    // Apply the new settings
    tcsetattr(0, TCSANOW, &t);
}

void key_end() { tcsetattr(0, TCSANOW, &orig); }

int key_get() {
    unsigned char c, s[2];
    if (read(0, &c, 1) != 1) return 0;
    if (c == 27 && read(0, s, 2) == 2 && s[0] == '[') {
        switch (s[1]) { case 'A': return 'U'; case 'B': return 'D';
                        case 'D': return 'L'; case 'C': return 'R'; }
        return 0;
    }
    return c;
}
#endif
/* --- End of 1-3 --- */


/*
---------------------------------------------------------------------------------------------

    2.
    GAME CONTROL FUNCTIONS

---------------------------------------------------------------------------------------------
*/
/*-------------------------------------------------------------------------------------------
    2-1. Uncategorized
-------------------------------------------------------------------------------------------*/
// Clamp to the range 1–9
void clamp_number(Cell* cell) {
    if (cell -> answer > 9) {
        cell -> answer = 9;
    }
    else if (cell -> answer < 1) {
        cell -> answer = 1;
    }
}

// Set the seed
void set_seed(Game* g, int mode) {
    switch(mode) {
        case SEED_CUSTOM:
            printf("Enter the seed: ");
            if (scanf("%u", g -> seed) != 1) {
                // Discard the rest of the line
                int c;
                while ((c = getchar()) != '\n' && c != EOF) { } 

                printf("Invalid seed. Using the default seed.\n");
                g -> seed = (unsigned int)time(NULL);
            }
        break;
        case SEED_BY_TIME:
            g -> seed = (unsigned int)time(NULL);
        break;
    }
}

// Fisher-Yates shuffle: go from back to front, fixing one position per step
void shuffle(int arr[], int size) {
    for (int i=size-1; i>0; i--) {
        int r = rand() % (i + 1);
    
        // Swap arr[i] and arr[r]
        int temp = arr[i];
        arr[i] = arr[r];
        arr[r] = temp;
    }
}
/* --- End of 2-1 --- */


/*-------------------------------------------------------------------------------------------
    2-2. File Writer
-------------------------------------------------------------------------------------------*/
// Start writing the file
void file_writing_start() {
    // Get the current local time
    time_t timer = time(NULL);
    struct tm* t = localtime(&timer);

    // Build the file name from the time
    char filename[100];
    strftime(filename, sizeof(filename), "%m-%d-%Y_%H%M%S.txt", t);

    // Open the file in write ("w") mode
    fp = fopen(filename, "w");
}

// Finish writing the file
void file_writing_end(const Game* g, Cell grid[9][9]) {
    // If fp (the file pointer) is NULL
    if (fp == NULL) {
        printf("%s\n", locale_get(locale, LAM_MAGPASS_ACCESS_FAILED_JAMMED));
    }
    // Otherwise, write the file
    else {
        fprintf(fp, "Seed: %u\n", g -> seed);
        fprintf(fp, "Player: %s\n", user.name);
        fprintf(fp, "\n");
        fprintf(fp, "Generator backtracks: %u\n", count_backtrack);
        fprintf(fp, "\n");

        // Write the Sudoku grid to the file as-is
        for(int row=0; row<9; row++) {
            for(int column=0; column<9; column++) {
                fprintf(fp, " %d ", grid[column][row].answer);
            }
            fprintf(fp, "\n");
        }

        // Close the file
        fclose(fp);
    }
}
/* --- End of 2-2 --- */


/*-------------------------------------------------------------------------------------------
    2-3. Puzzle Generation Algorithm
-------------------------------------------------------------------------------------------*/
// Get the index of the 3x3 subgrid, in row-major order (top-left to bottom-right)
// [⠶0] [⠶1] [⠶2]
// [⠶3] [⠶4] [⠶5]
// [⠶6] [⠶7] [⠶8]
int get_subgrid_number(int row, int column) {
    return ((row / 3) * 3 + (column / 3));
}

// [Generator/backtracking only] Check whether num can be placed at (row, column)
bool can_place(int row, int column, int num) {
    // Get the index of the 3x3 subgrid
    int subgrid_num = get_subgrid_number(row, column);

    // Return false if the row already contains num (the number to place)
    if (row_used[row][num]) {
        return false;
    }
    
    // Return false if the column already contains num (the number to place)
    if (column_used[column][num]) {
        return false;
    }
    
    // Return false if the 3x3 subgrid already contains num
    if (subgrid_used[subgrid_num][num]) {
        return false;
    }

    // Return false if num has already been tried in this cell
    if (cell_used[column][row][num]) {
        return false;
    }

    // num passed all four checks, so it can be placed here
    return true;
}

// [Generator/backtracking only] Place num at (row, column)
void place(int row, int column, int num, Cell grid[9][9]) {
    // Get the index of the 3x3 subgrid
    int subgrid_num = get_subgrid_number(row, column);

    // Place the number
    grid[column][row].answer = num;
    grid[column][row].value = num; // Temporary; the initial value is adjusted later by difficulty

    // Update the caches
    row_used[row][num] = true;
    column_used[column][num] = true;
    subgrid_used[subgrid_num][num] = true;
}

// [Generator/backtracking only] Remove the number at (row, column)
void remove_number(int row, int column, int num, Cell grid[9][9]) {
    // Get the index of the 3x3 subgrid
    int subgrid_num = get_subgrid_number(row, column);

    // Remove the number
    grid[column][row].answer = 0;
    grid[column][row].value = 0;

    // Update the caches
    row_used[row][num] = false;
    column_used[column][num] = false;
    subgrid_used[subgrid_num][num] = false;
}

// Reset cell_used (all cells)
void reset_cell_used() {
    for(int i=0; i<9; i++) {
        for(int j=0; j<9; j++) {
            for(int k=0; k<10; k++) {
                cell_used[i][j][k] = false;
            }
        }
    }
}

// Reset cell_used (one row only)
void reset_cell_used_row(int row) {
    for(int i=0; i<9; i++) {
        for(int j=0; j<10; j++) {
            cell_used[i][row][j] = false;
        }
    }
}

// Reset cell_used (one column only)
void reset_cell_used_column(int column) {
    for(int i=0; i<9; i++) {
        for(int j=0; j<10; j++) {
            cell_used[column][i][j] = false;
        }
    }
}

// Reset all generator caches
void reset_generator() {
    memset(row_used, 0, sizeof row_used);
    memset(column_used, 0, sizeof column_used);
    memset(subgrid_used, 0, sizeof subgrid_used);
    memset(cell_used, 0, sizeof cell_used);
    count_backtrack = 0;
}

// Print the whole grid
void show_grid(Cell grid[9][9]) {
    for(int row=0; row<9; row++) {
        if (row==0) {
            printf("┌─────────┬─────────┬─────────┐\n");
        }
        for(int column=0; column<9; column++) {
            if (column == 0) {
                printf("│");
            }
            char cursor_enabled = '>';
            printf("%c%d ", cursor_enabled, grid[column][row].answer);
            if (column == 8) {
                printf("│");
            }
            if ((column+1)%3==0 && column<8) printf("│");
        }
        if (row == 8) {
            printf("\n└─────────┴─────────┴─────────┘");
        }
        printf("\n");
        if ((row+1)%3==0 && row<8) printf("├─────────┼─────────┼─────────┤\n");
    }
}
/* --- End of 2-3 --- */


/*-------------------------------------------------------------------------------------------
    2-4. Puzzle Generation Algorithm: Part 2
-------------------------------------------------------------------------------------------*/
// Generate the Sudoku grid — the core function of this program
void generate_grid(Cell grid[9][9]) {
    reset_generator();
    
    int candidate_nums[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int while_idx = 0;
    while(while_idx < 81) {
        // Convert the flat index into row and column
        int row = while_idx / 9;
        int column = while_idx % 9;

        // Shuffle the candidate numbers
        shuffle(candidate_nums, 9);

        // Whether a number was placed in this cell
        bool passed = false;

        // Try the candidates one by one
        for(int i=0; i<9; i++) {
            // Get the candidate at index i
            int num = candidate_nums[i];

            // Skip it if it cannot be placed here
            if (!can_place(row, column, num)) continue;

            // Place the number
            place(row, column, num, grid);
            passed = true;
            break;
        }

        // If the loop above placed a number
        if (passed) {
            // Debug message
            printf("(%d, %d) %d: ", row, column, while_idx);

            // Move to the next cell
            while_idx++;
            
            // Debug message
            printf("Number placed ----> %d\n", grid[column][row].answer);

            // Skip the backtracking code below
            continue;
        }

        // If the loop above failed to place a number, backtrack using the code below
        
        // If while_idx is 0 or less, there is nothing to backtrack to
        if (while_idx <= 0) {
            // Reset everything to start over from scratch
            
            // Reset the arrays
            for(int i=0; i<9; i++) {
                for(int j=0; j<9; j++) {
                    for(int k=0; k<10; k++) {
                        cell_used[i][j][k] = false;
                        row_used[j][k] = false;
                        column_used[j][k] = false;
                        subgrid_used[j][k] = false;
                    }
                }
            }

            printf("판을 재생성했습니다.\n");
        }

        // Otherwise, backtrack normally
        else {
            // Added on November 11
            for (int k=0; k<10; k++) {
                cell_used[column][row][k] = false;
            }

            // Step back one cell
            while_idx--;
            count_backtrack++;

            // Get the row and column of the cell we stepped back to
            int backtracked_row = while_idx / 9;
            int backtracked_column = while_idx % 9;

            // Mark that cell's current number as tried
            cell_used[backtracked_column][backtracked_row][grid[backtracked_column][backtracked_row].answer] = true;

            // Safety check; it is always true here, so this if can be removed
            if(backtracked_row >= 0 && backtracked_column >= 0) {
                // Remove the number from that cell
                printf("한 칸 백트래킹...\n");
                remove_number(backtracked_row, backtracked_column, grid[backtracked_column][backtracked_row].answer, grid);
            }
            
            // The next iteration retries that cell
        }
    }
}

// Reset the game and settings
void init_game(Game *g, Setting *s) {
    memset(g, 0, sizeof *g);
    memset(s, 0, sizeof *s);

    // Create the grid
    generate_grid(g -> grid);
}
/* --- End of 2-4 --- */


/*-------------------------------------------------------------------------------------------
    2-5. Command Handler
-------------------------------------------------------------------------------------------*/
void show_help(void);

// Read and process the user's command
void game_controller(Game *g, Setting *s, uint8_t *flag) {

    int key = key_get();


}
/* --- End of 2-5 --- */




/*
---------------------------------------------------------------------------------------------

    3.
    SAVE DATA FUNCTIONS

---------------------------------------------------------------------------------------------
*/

void login() {
    printf("\n%s\n", locale_get(locale, LAM_MAGPASS_ACCESS));
    printf("\n%s\n", locale_get(locale, LAM_MAGPASS_ACCESS_FAILED_SEARCH));

    // Try to open the save file
    fp = fopen("savedata.dat", "rb");

    if (fp == NULL) {
        printf("\n%s\n", locale_get(locale, LAM_MAGPASS_ACCESS_FAILED_SEARCH));
    }
    else {
        int username_len = 0;
        bool ok = false;

        // Read the name length first and check that it makes sense (1-100)
        if (fread(&username_len, sizeof(int), 1, fp) == 1 &&
            username_len > 0 && username_len <= 100) {

            user.name = (char *)malloc(username_len);
            if (user.name != NULL &&
                fread(user.name, sizeof(char), username_len, fp) == (size_t)username_len &&
                fread(&user.id, sizeof(int), 1, fp) == 1) {
                user.name[username_len - 1] = '\0'; // Guarantee a terminator even if the file is corrupted
                ok = true;
            }
        }
        fclose(fp);
        fp = NULL;

        if (ok) {
            printf("\n[SYSTEM] MagPass Loaded. Welcome, %s.\n", user.name);
            return;
        }

        // If reading failed
        free(user.name);
        user.name = NULL;
        printf("\n\aYou should create a new MagPass.\n");

    }

    //-----------------------------------------------------------------------------------
    // 1. Name input
    //-----------------------------------------------------------------------------------
    user.name = (char *)malloc(100 * sizeof(char));
    if (user.name == NULL) {
        printf("메모리 할당 실패\n");
        return;
    }

    printf("%s", locale_get(locale, LAM_MAGPASS_ISSUE_NAME));
    if (fgets(user.name, 100, stdin) == NULL) {
        strcpy(user.name, "PLAYER");
    }
    else {
        size_t len = strlen(user.name);
        if (len > 0 && user.name[len - 1] == '\n') {
            user.name[len - 1] = '\0'; // fgets keeps the newline, so remove it
        }
        else {
            // Input longer than 99 bytes: discard the rest of the line
            int c; while ((c = getchar()) != '\n' && c != EOF) {}
        }
    }

    // Only Enter was pressed
    if (user.name[0] == '\0') {
        strcpy(user.name, "Player");
    }

    printf("NAME: %s\n", user.name);

    //-----------------------------------------------------------------------------------
    // 2. Symbol selection
    //-----------------------------------------------------------------------------------
    user.avatar_id = 1;

    //-----------------------------------------------------------------------------------
    // 3. ID allocation
    //-----------------------------------------------------------------------------------
    user.id = 12345678;

    //-----------------------------------------------------------------------------------
    // 4. Save to file
    //-----------------------------------------------------------------------------------
    fp = fopen("savedata.dat", "wb");
    if (fp == NULL) {
        printf("\n%s\n", locale_get(locale, LAM_MAGPASS_ISSUE_FAILED));
        return; // The name is still kept for this session
    }

    int username_len = (int)strlen(user.name) + 1; // Including '\0'
    fwrite(&username_len, sizeof(int), 1, fp);
    fwrite(user.name, sizeof(char), username_len, fp);
    fwrite(&user.id, sizeof(int), 1, fp);

    fclose(fp);
    fp = NULL;
    // Do not free user.name here; it is freed once at the end of main
}




/*
---------------------------------------------------------------------------------------------

    4.
    SCENE CONTROL FUNCTIONS

---------------------------------------------------------------------------------------------
*/

void show_title() {
    clear_screen();
    printf("\n\n\n\n\n\n");
    printf("%s%s", ANSI_BOLD, ANSI_COLOR_BLUE);
    printf(
        "     SSSSS  U    U  DDDD     OOOO   K    K  U    U\n"
        "    S       U    U  D   D   O    O  K   K   U    U\n"
        "     SSSS   U    U  D    D  O    O  KKKK    U    U\n"
        "         S  U    U  D   D   O    O  K   K   U    U\n"
        "    SSSSS    UUUU   DDDD     OOOO   K    K   UUUU \n"
    );
    printf("%s", ANSI_RESET);
    printf("\n    Magic Arcade");
    printf("\n\n\n    Created by June Saturn");
    printf("\n\n\n\n\n\n\n\n\n\n%s", locale_get(locale, LAM_TOSTART));
    while(1) {

    }
}

void show_help() {
    clear_screen();
}




/*
---------------------------------------------------------------------------------------------

    0.
    ENTRY POINT

---------------------------------------------------------------------------------------------
*/
int main() {
    enable_ansi();

    // Load the save data
    login();

    // Title screen
    show_title();

    // Initialize the game
    Game game;
    Setting setting;
    init_game(&game, &setting);

    // Set the seed for random number generation
    set_seed(&game, SEED_BY_TIME);
    srand(game.seed);

    // Start writing the file
    file_writing_start();

    // Print the grid to the console
    show_grid(game.grid);

    // Write the file and close it
    file_writing_end(&game, game.grid);

    uint8_t flag = 0;
    while(1) {
        // Clear the screen
        clear_screen();
        show_grid(game.grid);

        // Check if the game is finished
        if (game.finished) {
            if (game.revealed) {
                printf("    %s%s %s %s\n\n", ANSI_BOLD, ANSI_COLOR_BG_YELLOW, locale_get(locale, SUDOKU_SOLUTION_REVEALED), ANSI_RESET);
            }
            else {
                printf("    %s \n\n", locale_get(locale, SUDOKU_FINISHED));
            }
        }

        game_controller(&game, &setting, &flag);

        if (flag == FLAG_GAMESTOP) break;
    }

    // Free dynamically allocated memory
    free(user.name);
    user.name = NULL;

    return 0;
}