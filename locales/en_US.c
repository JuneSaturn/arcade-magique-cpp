#pragma once
#include "locale.h"

const char *const en_US[TEXT_COUNT] = {

[LAM_TITLE] = "Magic Arcade",
[LAM_LOCALE_LANG_CURRENT] = "English",
[LAM_LOCALE_REGION_CURRENT] = "United States",
[LAM_LICENSE] = "MIT License",

[LAM_ABOUT] = "About Magic Arcade",
[LAM_ABOUT_MACOS] = "About This Magic Arcade",

[LAM_STD_OPEN] = "Open",
[LAM_STD_CLOSE] = "Close",
[LAM_STD_CONTINUE] = "Continue",
[LAM_STD_PAUSE] = "Pause",
[LAM_STD_START] = "Start",
[LAM_STD_BACK] = "Back",
[LAM_STD_OK] = "OK",
[LAM_STD_CANCEL] = "Cancel",
[LAM_STD_YES] = "Yes",
[LAM_STD_NO] = "No",
[LAM_STD_SAVE] = "Save",
[LAM_STD_LOAD] = "Load",
[LAM_STD_DELETE] = "Delete",
[LAM_STD_BACKUP] = "Backup",

[SOLITAIRE_KLONDIKE_TITLE] = "Klondike Solitaire",
[SOLITAIRE_SPIDER_TITLE] = "Spider Solitaire",
[ONECARD_TITLE] = "One Card",
[OLDMAID_TITLE] = "Old Maid",
[POKER_TITLE] = "Poker",
[SNAKE_TITLE] = "Snake",
[AIRHOCKEY_TITLE] = "Air Hockey",
[SUDOKU_TITLE] = "Sudoku",
[NONOGRAM_TITLE] = "Nonogram",
[TZFE_TITLE] = "2048",
[THIRTYONE_TITLE] = "31 Game",
[DRAUGHTS_TITLE] = "Checkers",
[REVERSI_TITLE] = "Reversi",
[CHESS_TITLE] = "Chess",
[GOMOKU_TITLE] = "Gomoku",
[BACKGAMMON_TITLE] = "Backgammon",

[LAM_DIFF] = "Difficulty",
[LAM_DIFF_PRACTICE] = "Practice",
[LAM_DIFF_EASY] = "Easy",
[LAM_DIFF_NORMAL] = "Normal",
[LAM_DIFF_HARD] = "Hard",
[LAM_DIFF_VERYHARD] = "Very Hard",

[LAM_MAGPASS_YOUCAN] = "You can save your game to MagPass. Your save data can also be loaded in other environments and other editions of Magic Arcade.",
[LAM_MAGPASS_ACCESS] = "Searching for accessible MagPass (Save data)...",
[LAM_MAGPASS_ACCESS_FAILED_SEARCH] = "Couldn't find the file. Creating the new one.",
[LAM_MAGPASS_ACCESS_FAILED_JAMMED] = "Couldn't open the file. It won't be saved.",
[LAM_MAGPASS_ISSUE] = "Issue New MagPass",
[LAM_MAGPASS_ISSUE_NAME] = "Enter the name.",
[LAM_MAGPASS_ISSUE_NAME_DESC] = "Enter the name.",
[LAM_MAGPASS_ISSUE_FAILED] = "Failed to issue MagPass",

[LAM_HIGHSCORE] = "High Score",
[LAM_NEWSCORE] = "New Record",
[LAM_MAGICTOKEN] = "Magic Token",
[LAM_MAGICTOKENS] = "Magic Tokens",

[LAM_UNDO] = "Undo",
[LAM_REDO] = "Redo",
[LAM_REDO_MACOS] = "Redo",

[LAM_PARAM] = "Settings",
[LAM_PARAM_AUDIO] = "Audio",
[LAM_PARAM_VIDEO] = "Video",
[LAM_PARAM_GAMEPLAY] = "Gameplay",
[LAM_PARAM_LANG] = "Language",
[LAM_PARAM_SAVEDATA] = "Save data",
[LAM_PARAM_MULTIPLAYER] = "Multiplayer",

[LAM_MODE_SINGLEPLAYER] = "Singleplayer",
[LAM_MODE_MULTIPLAYER] = "Multiplayer",
[LAM_MODE_MULTIPLAYER_ONLINE] = "Online",
[LAM_MODE_MULTIPLAYER_LOCAL] = "Local Network",
[LAM_MODE_MULTIPLAYER_P2P] = "P2P Connection",
[LAM_MODE_MULTIPLAYER_PARTY] = "Party Play",

[LAM_TOSTART] = "PRESS [SPACE] OR [ENTER] TO START",
[LAM_TOSTART_MACOS] = "PRESS [SPACE] OR [RETURN] TO START",

[LAM_TUI_SCREENADJUST_EDGE] = "O",
[LAM_TUI_SCREENADJUST_LINE_VERTICAL] = "|",
[LAM_TUI_SCREENADJUST_LINE_HORIZONTAL] = "-",
[LAM_TUI_SCREENADJUST_MSG] = "Resize the window to fit the rectangle to start the game. Press Enter when you're done.",
[LAM_TUI_SCREENADJUST_MSG_MACOS] = "Resize the window to fit the rectangle to start the game. Press Return when you're done.",
[LAM_TUI_COLORTEST_MSG] = "Do these colors display correctly without any glitches?",
[LAM_TUI_COLORTEST_BLINDNESS] = "I have a color vision deficiency",

[LAM_MULTIPLAYER_OPENSESSION] = "Create Session",
[LAM_MULTIPLAYER_JOINSESSION] = "Join Session",
[LAM_MULTIPLAYER_NOSESSION] = "No session available to join.",
[LAM_MULTIPLAYER_WAITING] = "Waiting for an opponent...",
[LAM_MULTIPLAYER_DISCONNECTED] = "Disconnected.",
[LAM_MULTIPLAYER_MSG_ENTER] = " has joined the game.",
[LAM_MULTIPLAYER_MSG_LEAVE] = " has left the game.",

[LAM_SEEDCUSTOM] = "Enter the seed.",
[LAM_SEEDINVALID] = "Invalid seed. Using the default seed.",

// ----------------------------------------------------------------------------------------------------------

// Card Game Standards
[CARD_SUIT] = "Suit",
[CARD_SUIT_SPADE] = "Spades",
[CARD_SUIT_HEART] = "Hearts",
[CARD_SUIT_DIAMOND] = "Diamonds",
[CARD_SUIT_CLUB] = "Clubs",
[CARD_SUIT_JOKER] = "Joker",
[CARD_RANK] = "Rank",
[CARD_RANK_K] = "King",
[CARD_RANK_Q] = "Queen",
[CARD_RANK_J] = "Jack",
[CARD_RANK_A] = "Ace",
[CARD_SUIT_EX] = "Suit (Extended)",
[CARD_SUIT_EX_STAR] = "Stars",
[CARD_SUIT_EX_MOON] = "Moons",
[CARD_SUIT_EX_SNOW] = "Snowflakes",



// Old Maid
[OLDMAID_MODE] = "Select a mode.",
[OLDMAID_PLAYOLDMAID] = "Play Old Maid",
[OLDMAID_PLAYOLDMAID_DESC] = "The card to get rid of is the Queen of Hearts (Q).",
[OLDMAID_PLAYJOKERCAPTURE] = "Play Catch the Thief",
[OLDMAID_PLAYJOKERCAPTURE_DESC] = "The card to get rid of is the Joker.",
[OLDMAID_PLAYBLACKPETER] = "Play Black Peter",
[OLDMAID_PLAYBLACKPETER_DESC] = "The card to get rid of is a black Jack (J).",

[OLDMAID_HUD_MYCARDS] = "My Cards",

[OLDMAID_INPUTMSG_SELECTCARD] = "Select a card to take.",
[OLDMAID_INPUTMSG_TUI_SELECTCARD] = "Select a card to take and press Enter.",



// Poker
[POKER_CURRENCY] = "Points",
[POKER_CURRENCY_CAUTION] = "Points earned in Poker can only be used to play Poker and cannot be exchanged 1:1 for Magic Tokens!",

[POKER_ACT_PUSH] = "Push",
[POKER_ACT_BLUFF] = "Bluff",
[POKER_ACT_ALLIN] = "All In",
[POKER_ACT_BET] = "Bet",
[POKER_ACT_RAISE] = "Raise",
[POKER_ACT_FOLD] = "Fold",
[POKER_ACT_FOLD_KR] = "Fold",
[POKER_ACT_CHECK] = "Check",
[POKER_ACT_CALL] = "Call",

[POKER_HANDRANKING_RSTFL] = "Royal Flush",
[POKER_HANDRANKING_SFL] = "Straight Flush",
[POKER_HANDRANKING_FOUR] = "Four of a Kind",
[POKER_HANDRANKING_FH] = "Full House",
[POKER_HANDRANKING_FL] = "Flush",
[POKER_HANDRANKING_ST] = "Straight",
[POKER_HANDRANKING_THRE] = "Three of a Kind",
[POKER_HANDRANKING_TWOP] = "Two Pair",
[POKER_HANDRANKING_ONEP] = "One Pair",
[POKER_HANDRANKING_HIGH] = "High Card",

[POKER_MSG_HOWMANYBET] = "How much would you like to bet?",



// Snake
[SNAKE_PARAM_HEAD_SHAPE] = "Head Shape",
[SNAKE_PARAM_HEAD_COL] = "Head Color",
[SNAKE_PARAM_TAIL_SHAPE] = "Tail Shape",
[SNAKE_PARAM_TAIL_COL] = "Tail Color",
[SNAKE_PARAM_FOOD_SHAPE] = "Food Shape",
[SNAKE_PARAM_FOOD_COL] = "Food Color",
[SNAKE_PARAM_ENEMY_HEAD_SHAPE] = "Enemy Head Shape",
[SNAKE_PARAM_ENEMY_HEAD_COL] = "Enemy Head Color",
[SNAKE_PARAM_ENEMY_TAIL_SHAPE] = "Enemy Tail Shape",
[SNAKE_PARAM_ENEMY_TAIL_COL] = "Enemy Tail Color",
[SNAKE_PARAM_SPEED_PERLENGTH] = "Speed changes with length",
[SNAKE_PARAM_SPEED_PERLIFE] = "Speed changes with survival time",
[SNAKE_PARAM_SPEED_ROC] = "Speed Change Rate",
[SNAKE_PARAM_SPEED_NEGATIVE] = "Negative",
[SNAKE_PARAM_SPEED_ZERO] = "0",
[SNAKE_PARAM_SPEED_POSITIVE] = "Positive",
[SNAKE_PARAM_LIVES] = "Enable Lives",



// Air Hockey
[AIRHOCKEY_PLAYER_VSAI] = "1 vs AI",
[AIRHOCKEY_PLAYER_VSPLAYER] = "1 vs 1",
[AIRHOCKEY_MODE_RUSH] = "Rush",
[AIRHOCKEY_MODE_RUSH_DESC] = "The player who scores the most goals within the time limit wins.",
[AIRHOCKEY_MODE_FIRSTTO] = "First To",
[AIRHOCKEY_MODE_FIRSTTO_DESC] = "The first player to reach the target score wins.",



// Sudoku
[SUDOKU_PARAM_INPUTMODE_CURSOR] = "Keyboard Cursor",
[SUDOKU_PARAM_INPUTMODE_CURSOR_DESC] = "Select a cell with the arrow keys or WASD, and...",
[SUDOKU_PARAM_INPUTMODE_COORDINATES] = "Coordinate Input",
[SUDOKU_PARAM_INPUTMODE_COORDINATES_DESC] = "Coordinate Input",

[SUDOKU_SOLUTION] = "Solution",
[SUDOKU_SOLUTION_REVEAL] = "Solve",
[SUDOKU_SOLUTION_REVEAL_ASK] = "Would you like to give up this game and view the solution? This will count as giving up.",
[SUDOKU_SOLUTION_REVEALED] = "Solved",

[SUDOKU_FINISHED] = "FINISHED!",
[SUDOKU_FINISHED_PLAYAGAIN] = "Would you like to play the same puzzle again?",



// 31 Game
[THIRTYONE_PARAM_MAXREACH] = "Max Reachable Number",
[THIRTYONE_PARAM_MAXCALL] = "Max Numbers per Turn",



// Draughts
[DRAUGHTS_MAN_BLACK] = "Black",
[DRAUGHTS_MAN_WHITE] = "White",
[DRAUGHTS_MAN_KING] = "King",
[DRAUGHTS_MODE_INTERNATIONAL] = "International",
[DRAUGHTS_MODE_ANGLO] = "Anglo-American Checkers",
[DRAUGHTS_MODE_ANGLO_AKA] = "Straight",
[DRAUGHTS_MODE_RUSSIAN] = "Russian Checkers",
[DRAUGHTS_MODE_RUSSIAN_AKA] = "Shashki",
[DRAUGHTS_MODE_BRAZILIAN] = "Brazilian Checkers",
[DRAUGHTS_MODE_CANADIAN] = "Canadian Checkers",
[DRAUGHTS_MODE_ITALIAN] = "Italian Checkers",

[DRAUGHTS_PARAM_BOARDSIZE] = "Board Size",
[DRAUGHTS_PARAM_BACKWARDCAPTURING] = "Capture Backward",
[DRAUGHTS_PARAM_KINGCAPTUREING] = "Capturing Kings",
[DRAUGHTS_PARAM_KINGCAPTUREING_ANYONE] = "Any Piece",
[DRAUGHTS_PARAM_KINGCAPTUREING_KINGONLY] = "Kings Only",
[DRAUGHTS_PARAM_KINGPRIORIZE] = "Kings Have Priority",
[DRAUGHTS_PARAM_CAPTUREFORCE] = "Force Maximum Capture",
[DRAUGHTS_PARAM_FLIPSIDES] = "Flip Horizontally",



// Chess
[CHESS_PIECE_BLACK] = "Black",
[CHESS_PIECE_WHITE] = "White",
[CHESS_PIECE_KING] = "King",
[CHESS_PIECE_QUEEN] = "Queen",
[CHESS_PIECE_ROOK] = "Rook",
[CHESS_PIECE_BISHOP] = "Bishop",
[CHESS_PIECE_KNIGHT] = "Knight",
[CHESS_PIECE_PAWN] = "Pawn",



// Gomoku
[GOMOKU_PIECE_BLACK] = "Black Stone",
[GOMOKU_PIECE_WHITE] = "White Stone",

};