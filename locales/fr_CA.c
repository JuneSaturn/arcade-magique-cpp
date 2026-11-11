#pragma once
#include "locale.h"

const char *const fr_CA[TEXT_COUNT] = {

[LAM_TITLE] = "L'Arcade Magique",
[LAM_LOCALE_LANG_CURRENT] = "Français",
[LAM_LOCALE_REGION_CURRENT] = "Canada",
[LAM_LICENSE] = "Licence MIT",

[LAM_ABOUT] = "À propos de L'Arcade Magique",
[LAM_ABOUT_MACOS] = "À propos de L'Arcade Magique",

[LAM_STD_OPEN] = "Ouvrir",
[LAM_STD_CLOSE] = "Fermer",
[LAM_STD_CONTINUE] = "Continuer",
[LAM_STD_PAUSE] = "Pause",
[LAM_STD_START] = "Commencer",
[LAM_STD_BACK] = "Retour",
[LAM_STD_OK] = "OK",
[LAM_STD_CANCEL] = "Annuler",
[LAM_STD_YES] = "Oui",
[LAM_STD_NO] = "Non",
[LAM_STD_SAVE] = "Enregistrer",
[LAM_STD_LOAD] = "Charger",
[LAM_STD_DELETE] = "Supprimer",
[LAM_STD_BACKUP] = "Copie de sauvegarde",

[SOLITAIRE_KLONDIKE_TITLE] = "Solitaire Klondike",
[SOLITAIRE_SPIDER_TITLE] = "Solitaire Spider",
[ONECARD_TITLE] = "One Card",
[OLDMAID_TITLE] = "Pouilleux",
[POKER_TITLE] = "Poker",
[SNAKE_TITLE] = "Snake",
[AIRHOCKEY_TITLE] = "Hockey pneumatique",
[SUDOKU_TITLE] = "Sudoku",
[NONOGRAM_TITLE] = "Nonogramme",
[TZFE_TITLE] = "2048",
[THIRTYONE_TITLE] = "Jeu du 31",
[DRAUGHTS_TITLE] = "Dames",
[REVERSI_TITLE] = "Reversi",
[CHESS_TITLE] = "Échecs",
[GOMOKU_TITLE] = "Gomoku",
[BACKGAMMON_TITLE] = "Backgammon",

[LAM_DIFF] = "Difficulté",
[LAM_DIFF_PRACTICE] = "Entraînement",
[LAM_DIFF_EASY] = "Facile",
[LAM_DIFF_NORMAL] = "Normal",
[LAM_DIFF_HARD] = "Difficile",
[LAM_DIFF_VERYHARD] = "Très difficile",

[LAM_MAGPASS_YOUCAN] = "Vous pouvez enregistrer votre partie dans MagPass. Vos parties enregistrées peuvent aussi être chargées dans d'autres environnements et d'autres éditions de L'Arcade Magique.",
[LAM_MAGPASS_ACCESS] = "Searching for accessible MagPass (Save data)...",
[LAM_MAGPASS_ACCESS_FAILED_SEARCH] = "Couldn't find the file. Creating the new one.",
[LAM_MAGPASS_ACCESS_FAILED_JAMMED] = "Impossible d'ouvrir le fichier. La partie ne sera pas enregistrée.",
[LAM_MAGPASS_ISSUE] = "Issue New MagPass",
[LAM_MAGPASS_ISSUE_NAME] = "Enter the name.",
[LAM_MAGPASS_ISSUE_NAME_DESC] = "Enter the name.",
[LAM_MAGPASS_ISSUE_FAILED] = "Failed to issue MagPass",

[LAM_HIGHSCORE] = "Meilleur score",
[LAM_NEWSCORE] = "Nouveau record",
[LAM_MAGICTOKEN] = "Jeton magique",
[LAM_MAGICTOKENS] = "Jetons magiques",

[LAM_UNDO] = "Annuler",
[LAM_REDO] = "Rétablir",
[LAM_REDO_MACOS] = "Rétablir",

[LAM_PARAM] = "Paramètres",
[LAM_PARAM_AUDIO] = "Audio",
[LAM_PARAM_VIDEO] = "Vidéo",
[LAM_PARAM_GAMEPLAY] = "Jouabilité",
[LAM_PARAM_LANG] = "Langue",
[LAM_PARAM_SAVEDATA] = "Parties enregistrées",
[LAM_PARAM_MULTIPLAYER] = "Multijoueur",

[LAM_MODE_SINGLEPLAYER] = "Solo",
[LAM_MODE_MULTIPLAYER] = "Multijoueur",
[LAM_MODE_MULTIPLAYER_ONLINE] = "En ligne",
[LAM_MODE_MULTIPLAYER_LOCAL] = "Réseau local",
[LAM_MODE_MULTIPLAYER_P2P] = "Connexion P2P",
[LAM_MODE_MULTIPLAYER_PARTY] = "Jeu en groupe",

[LAM_TOSTART] = "PRESS [SPACE] OR [ENTER] TO START",
[LAM_TOSTART_MACOS] = "PRESS [SPACE] OR [RETURN] TO START",

[LAM_TUI_SCREENADJUST_EDGE] = "O",
[LAM_TUI_SCREENADJUST_LINE_VERTICAL] = "|",
[LAM_TUI_SCREENADJUST_LINE_HORIZONTAL] = "-",
[LAM_TUI_SCREENADJUST_MSG] = "Ajustez la fenêtre au rectangle pour commencer la partie. Appuyez sur Entrée une fois terminé.",
[LAM_TUI_SCREENADJUST_MSG_MACOS] = "Austez la fenêtre au rectangle pour commencer la partie. Appuyez sur Entrée une fois terminé.",
[LAM_TUI_COLORTEST_MSG] = "Ces couleurs s'affichent-elles correctement, sans défaut?",
[LAM_TUI_COLORTEST_BLINDNESS] = "J'ai un trouble de la vision des couleurs",

[LAM_MULTIPLAYER_OPENSESSION] = "Créer un salon",
[LAM_MULTIPLAYER_JOINSESSION] = "Rejoindre un salon",
[LAM_MULTIPLAYER_NOSESSION] = "Aucun salon disponible.",
[LAM_MULTIPLAYER_WAITING] = "En attente d'un adversaire...",
[LAM_MULTIPLAYER_DISCONNECTED] = "La connexion a été interrompue.",
[LAM_MULTIPLAYER_MSG_ENTER] = " a rejoint la partie.",
[LAM_MULTIPLAYER_MSG_LEAVE] = " a quitté la partie.",

[LAM_SEEDCUSTOM] = "Saisissez la graine.",
[LAM_SEEDINVALID] = "Graine invalide. Utilisation de la graine par défaut.",

// ----------------------------------------------------------------------------------------------------------

// Card Game Standards
[CARD_SUIT] = "Couleur",
[CARD_SUIT_SPADE] = "Pique",
[CARD_SUIT_HEART] = "Cœur",
[CARD_SUIT_DIAMOND] = "Carreau",
[CARD_SUIT_CLUB] = "Trèfle",
[CARD_SUIT_JOKER] = "Joker",
[CARD_RANK] = "Valeur",
[CARD_RANK_K] = "Roi",
[CARD_RANK_Q] = "Dame",
[CARD_RANK_J] = "Valet",
[CARD_RANK_A] = "As",
[CARD_SUIT_EX] = "Couleur (étendue)",
[CARD_SUIT_EX_STAR] = "Étoile",
[CARD_SUIT_EX_MOON] = "Lune",
[CARD_SUIT_EX_SNOW] = "Flocon",

[CARD_PARAM_RANK_KQJ] = "KQJ",
[CARD_PARAM_RANK_RDV] = "RDV",



// Old Maid
[OLDMAID_MODE] = "Choisissez un mode.",
[OLDMAID_PLAYOLDMAID] = "Mode Vieille Fille",
[OLDMAID_PLAYOLDMAID_DESC] = "La carte dont il faut se débarrasser est la dame de cœur (Q/D).",
[OLDMAID_PLAYJOKERCAPTURE] = "Mode Attrape-voleur",
[OLDMAID_PLAYJOKERCAPTURE_DESC] = "La carte dont il faut se débarrasser est le Joker.",
[OLDMAID_PLAYBLACKPETER] = "Mode Pierre Noir",
[OLDMAID_PLAYBLACKPETER_DESC] = "La carte dont il faut se débarrasser est un valet noir (J/V).",

[OLDMAID_HUD_MYCARDS] = "Mes cartes",

[OLDMAID_INPUTMSG_SELECTCARD] = "Choisissez la carte à prendre.",
[OLDMAID_INPUTMSG_TUI_SELECTCARD] = "Choisissez la carte à prendre et appuyez sur Entrée.",



// Poker
[POKER_CURRENCY] = "Points",
[POKER_CURRENCY_CAUTION] = "Les points gagnés au Poker ne peuvent servir qu'à jouer au Poker et ne sont pas échangeables 1:1 contre des Jetons magiques!",

[POKER_ACT_PUSH] = "Push",
[POKER_ACT_BLUFF] = "Bluff",
[POKER_ACT_ALLIN] = "Tapis",
[POKER_ACT_BET] = "Miser",
[POKER_ACT_RAISE] = "Relancer",
[POKER_ACT_FOLD] = "Se coucher",
[POKER_ACT_FOLD_KR] = "Se coucher",
[POKER_ACT_CHECK] = "Parole",
[POKER_ACT_CALL] = "Suivre",

[POKER_HANDRANKING_RSTFL] = "Quinte flush royale",
[POKER_HANDRANKING_SFL] = "Quinte flush",
[POKER_HANDRANKING_FOUR] = "Carré",
[POKER_HANDRANKING_FH] = "Full",
[POKER_HANDRANKING_FL] = "Couleur",
[POKER_HANDRANKING_ST] = "Quinte",
[POKER_HANDRANKING_THRE] = "Brelan",
[POKER_HANDRANKING_TWOP] = "Double paire",
[POKER_HANDRANKING_ONEP] = "Paire",
[POKER_HANDRANKING_HIGH] = "Carte haute",

[POKER_MSG_HOWMANYBET] = "Combien voulez-vous miser?",



// Snake
[SNAKE_PARAM_HEAD_SHAPE] = "Forme de la tête",
[SNAKE_PARAM_HEAD_COL] = "Couleur de la tête",
[SNAKE_PARAM_TAIL_SHAPE] = "Forme de la queue",
[SNAKE_PARAM_TAIL_COL] = "Couleur de la queue",
[SNAKE_PARAM_FOOD_SHAPE] = "Forme de la nourriture",
[SNAKE_PARAM_FOOD_COL] = "Couleur de la nourriture",
[SNAKE_PARAM_ENEMY_HEAD_SHAPE] = "Forme de la tête ennemie",
[SNAKE_PARAM_ENEMY_HEAD_COL] = "Couleur de la tête ennemie",
[SNAKE_PARAM_ENEMY_TAIL_SHAPE] = "Forme de la queue ennemie",
[SNAKE_PARAM_ENEMY_TAIL_COL] = "Couleur de la queue ennemie",
[SNAKE_PARAM_SPEED_PERLENGTH] = "La vitesse varie selon la longueur",
[SNAKE_PARAM_SPEED_PERLIFE] = "La vitesse varie selon le temps de survie",
[SNAKE_PARAM_SPEED_ROC] = "Taux de variation de la vitesse",
[SNAKE_PARAM_SPEED_NEGATIVE] = "Négatif",
[SNAKE_PARAM_SPEED_ZERO] = "0",
[SNAKE_PARAM_SPEED_POSITIVE] = "Positif",
[SNAKE_PARAM_LIVES] = "Activer les vies",



// Air Hockey
[AIRHOCKEY_PLAYER_VSAI] = "1 vs IA",
[AIRHOCKEY_PLAYER_VSPLAYER] = "1 vs 1",
[AIRHOCKEY_MODE_RUSH] = "Contre-la-montre",
[AIRHOCKEY_MODE_RUSH_DESC] = "La personne qui marque le plus de buts dans le temps imparti l'emporte.",
[AIRHOCKEY_MODE_FIRSTTO] = "Course aux points",
[AIRHOCKEY_MODE_FIRSTTO_DESC] = "La première personne à atteindre le score cible l'emporte.",



// Sudoku
[SUDOKU_PARAM_INPUTMODE_CURSOR] = "Curseur clavier",
[SUDOKU_PARAM_INPUTMODE_CURSOR_DESC] = "Sélectionnez une case avec les flèches ou les touches WASD, puis ",
[SUDOKU_PARAM_INPUTMODE_COORDINATES] = "Saisie des coordonnées",
[SUDOKU_PARAM_INPUTMODE_COORDINATES_DESC] = "Saisie des coordonnées",

[SUDOKU_SOLUTION] = "Solution",
[SUDOKU_SOLUTION_REVEAL] = "Voir la solution",
[SUDOKU_SOLUTION_REVEAL_ASK] = "Voulez-vous abandonner cette partie et consulter la solution ? Cela sera comptabilisé comme un abandon.",
[SUDOKU_SOLUTION_REVEALED] = "Solution affichée",

[SUDOKU_FINISHED] = "FINISHED!",
[SUDOKU_FINISHED_PLAYAGAIN] = "Would you like to play the same puzzle again?",



// 31 Game
[THIRTYONE_PARAM_MAXREACH] = "Valeur maximale à atteindre",
[THIRTYONE_PARAM_MAXCALL] = "Nombres maximum par tour",



// Draughts
[DRAUGHTS_MAN_BLACK] = "Noir",
[DRAUGHTS_MAN_WHITE] = "Blanc",
[DRAUGHTS_MAN_KING] = "Dame",
[DRAUGHTS_MODE_INTERNATIONAL] = "Dames internationales",
[DRAUGHTS_MODE_ANGLO] = "Dames anglaises",
[DRAUGHTS_MODE_ANGLO_AKA] = "Straight",
[DRAUGHTS_MODE_RUSSIAN] = "Dames russes",
[DRAUGHTS_MODE_RUSSIAN_AKA] = "Chachki",
[DRAUGHTS_MODE_BRAZILIAN] = "Dames brésiliennes",
[DRAUGHTS_MODE_CANADIAN] = "Dames canadiennes",
[DRAUGHTS_MODE_ITALIAN] = "Dames italiennes",

[DRAUGHTS_PARAM_BOARDSIZE] = "Taille du damier",
[DRAUGHTS_PARAM_BACKWARDCAPTURING] = "Prise en arrière",
[DRAUGHTS_PARAM_KINGCAPTUREING] = "Prise des dames",
[DRAUGHTS_PARAM_KINGCAPTUREING_ANYONE] = "Par toutes les pièces",
[DRAUGHTS_PARAM_KINGCAPTUREING_KINGONLY] = "Par les dames uniquement",
[DRAUGHTS_PARAM_KINGPRIORIZE] = "Priorité aux dames",
[DRAUGHTS_PARAM_CAPTUREFORCE] = "Prise majoritaire obligatoire",
[DRAUGHTS_PARAM_FLIPSIDES] = "Inverser gauche-droite",



// Chess
[CHESS_PIECE_BLACK] = "Noir",
[CHESS_PIECE_WHITE] = "Blanc",
[CHESS_PIECE_KING] = "Roi",
[CHESS_PIECE_QUEEN] = "Dame",
[CHESS_PIECE_ROOK] = "Tour",
[CHESS_PIECE_BISHOP] = "Fou",
[CHESS_PIECE_KNIGHT] = "Cavalier",
[CHESS_PIECE_PAWN] = "Pion",



// Gomoku
[GOMOKU_PIECE_BLACK] = "Pierre noire",
[GOMOKU_PIECE_WHITE] = "Pierre blanche",

};