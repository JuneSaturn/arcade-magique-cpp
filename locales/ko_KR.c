#pragma once
#include "locale.h"

const char *const ko_KR[TEXT_COUNT] = {

[LAM_TITLE] = "아케이드 매직",
[LAM_LOCALE_LANG_CURRENT] = "한국어",
[LAM_LOCALE_REGION_CURRENT] = "대한민국",
[LAM_LICENSE] = "MIT 라이선스",

[LAM_ABOUT] = "아케이드 매직 정보",
[LAM_ABOUT_MACOS] = "이 아케이드 매직에 관하여",

[LAM_STD_OPEN] = "열기",
[LAM_STD_CLOSE] = "닫기",
[LAM_STD_CONTINUE] = "계속",
[LAM_STD_PAUSE] = "멈추기",
[LAM_STD_START] = "시작",
[LAM_STD_BACK] = "뒤로가기",
[LAM_STD_OK] = "확인",
[LAM_STD_CANCEL] = "취소",
[LAM_STD_YES] = "예",
[LAM_STD_NO] = "아니오",
[LAM_STD_SAVE] = "저장",
[LAM_STD_LOAD] = "불러오기",
[LAM_STD_DELETE] = "삭제",
[LAM_STD_BACKUP] = "백업",

[SOLITAIRE_KLONDIKE_TITLE] = "솔리테어 클론다이크",
[SOLITAIRE_SPIDER_TITLE] = "솔리테어 스파이더",
[ONECARD_TITLE] = "원카드",
[OLDMAID_TITLE] = "도둑 잡기",
[POKER_TITLE] = "포커",
[SNAKE_TITLE] = "스네이크",
[AIRHOCKEY_TITLE] = "에어 하키",
[SUDOKU_TITLE] = "스도쿠",
[NONOGRAM_TITLE] = "노노그램",
[TZFE_TITLE] = "2048",
[THIRTYONE_TITLE] = "31 게임",
[DRAUGHTS_TITLE] = "체커",
[REVERSI_TITLE] = "리버시",
[CHESS_TITLE] = "체스",
[GOMOKU_TITLE] = "오목",
[BACKGAMMON_TITLE] = "백개먼",

[LAM_DIFF] = "난이도",
[LAM_DIFF_PRACTICE] = "연습",
[LAM_DIFF_EASY] = "쉬움",
[LAM_DIFF_NORMAL] = "보통",
[LAM_DIFF_HARD] = "어려움",
[LAM_DIFF_VERYHARD] = "매우 어려움",

[LAM_MAGPASS_YOUCAN] = "MagPass에 게임을 저장할 수 있습니다. 저장 기록은 다른 환경과 다른 에디션의 아케이드 매직에서도 불러올 수 있습니다.",
[LAM_MAGPASS_ACCESS] = "MagPass(저장 기록)을 찾는 중입니다...",
[LAM_MAGPASS_ACCESS_FAILED_SEARCH] = "저장 기록을 찾지 못했습니다.";
[LAM_MAGPASS_ACCESS_FAILED_JAMMED] = "파일을 열 수 없습니다. 파일이 저장되지 않습니다.",
[LAM_MAGPASS_ISSUE] = "새 MagPass 발행",
[LAM_MAGPASS_ISSUE_NAME] = "이름을 입력하세요.",
[LAM_MAGPASS_ISSUE_NAME_DESC] = "이름을 입력하세요.",
[LAM_MAGPASS_ISSUE_FAILED] = "MagPass 발행에 실패했습니다.",

[LAM_HIGHSCORE] = "최고 점수",
[LAM_NEWSCORE] = "신기록",
[LAM_MAGICTOKEN] = "매직 토큰",
[LAM_MAGICTOKENS] = "매직 토큰",

[LAM_UNDO] = "실행 취소",
[LAM_REDO] = "다시 실행",
[LAM_REDO_MACOS] = "실행 복귀",

[LAM_PARAM] = "설정",
[LAM_PARAM_AUDIO] = "오디오",
[LAM_PARAM_VIDEO] = "비디오",
[LAM_PARAM_GAMEPLAY] = "게임플레이",
[LAM_PARAM_LANG] = "언어",
[LAM_PARAM_SAVEDATA] = "저장 기록",
[LAM_PARAM_MULTIPLAYER] = "멀티플레이",

[LAM_MODE_SINGLEPLAYER] = "싱글플레이",
[LAM_MODE_MULTIPLAYER] = "멀티플레이",
[LAM_MODE_MULTIPLAYER_ONLINE] = "온라인",
[LAM_MODE_MULTIPLAYER_LOCAL] = "로컬 통신",
[LAM_MODE_MULTIPLAYER_P2P] = "P2P 통신",
[LAM_MODE_MULTIPLAYER_PARTY] = "파티 플레이",

[LAM_TOSTART] = "PRESS [SPACE] OR [ENTER] TO START",
[LAM_TOSTART_MACOS] = "PRESS [SPACE] OR [RETURN] TO START",

[LAM_TUI_SCREENADJUST_EDGE] = "O",
[LAM_TUI_SCREENADJUST_LINE_VERTICAL] = "|",
[LAM_TUI_SCREENADJUST_LINE_HORIZONTAL] = "-",
[LAM_TUI_SCREENADJUST_MSG] = "게임을 시작하시려면 직사각형에 맞게 창을 조정해 주세요. 완료 후 Enter를 누르시면 계속합니다.",
[LAM_TUI_SCREENADJUST_MSG_MACOS] = "게임을 시작하시려면 직사각형에 맞게 윈도우를 조정해 주세요. 완료 후 Return을 누르시면 계속합니다.",
[LAM_TUI_COLORTEST_MSG] = "이 색상이 깨지지 않고 정확히 보이시나요?",
[LAM_TUI_COLORTEST_BLINDNESS] = "색각 이상이 있습니다.",

[LAM_MULTIPLAYER_OPENSESSION] = "방 만들기",
[LAM_MULTIPLAYER_JOINSESSION] = "방에 참가하기",
[LAM_MULTIPLAYER_NOSESSION] = "참가할 수 있는 방이 없습니다.",
[LAM_MULTIPLAYER_WAITING] = "상대방을 기다리는 중입니다...",
[LAM_MULTIPLAYER_DISCONNECTED] = "접속이 끊어졌습니다.",
[LAM_MULTIPLAYER_MSG_ENTER] = "님이 게임에 입장했습니다.",
[LAM_MULTIPLAYER_MSG_LEAVE] = "님이 게임에서 나갔습니다.",

[LAM_SEEDCUSTOM] = "시드를 입력하세요.",
[LAM_SEEDINVALID] = "유효하지 않은 시드입니다. 기본 시드가 적용됩니다.",

// ----------------------------------------------------------------------------------------------------------

// Card Game Standards
[CARD_SUIT] = "카드의 무늬",
[CARD_SUIT_SPADE] = "스페이드",
[CARD_SUIT_HEART] = "하트",
[CARD_SUIT_DIAMOND] = "다이아몬드",
[CARD_SUIT_CLUB] = "클로버",
[CARD_SUIT_JOKER] = "조커",
[CARD_RANK] = "카드의 순서",
[CARD_RANK_K] = "킹",
[CARD_RANK_Q] = "퀸",
[CARD_RANK_J] = "잭",
[CARD_RANK_A] = "에이스",
[CARD_SUIT_EX] = "카드의 무늬 (확장)",
[CARD_SUIT_EX_STAR] = "별",
[CARD_SUIT_EX_MOON] = "달",
[CARD_SUIT_EX_SNOW] = "눈",

[CARD_PARAM_RANK_KQJ] = "KQJ",
[CARD_PARAM_RANK_RDV] = "RDV",



// Old Maid
[OLDMAID_MODE] = "모드를 선택하세요.",
[OLDMAID_PLAYOLDMAID] = "올드 메이드 플레이",
[OLDMAID_PLAYOLDMAID_DESC] = "버려야 할 카드는 하트 퀸(Q)이 됩니다.",
[OLDMAID_PLAYJOKERCAPTURE] = "도둑 잡기 플레이",
[OLDMAID_PLAYJOKERCAPTURE_DESC] = "버려야 할 카드는 조커(JOKER)가 됩니다.",
[OLDMAID_PLAYBLACKPETER] = "블랙 피터 플레이",
[OLDMAID_PLAYBLACKPETER_DESC] = "버려야 할 카드는 블랙 잭(JACK)이 됩니다.",

[OLDMAID_HUD_MYCARDS] = "내 카드",

[OLDMAID_INPUTMSG_SELECTCARD] = "가져가실 카드를 선택하세요.",
[OLDMAID_INPUTMSG_TUI_SELECTCARD] = "가져가실 카드를 선택하고 Enter를 눌러주세요.",



// Poker
[POKER_CURRENCY] = "포인트",
[POKER_CURRENCY_CAUTION] = "포커에서 얻은 포인트는 오직 포커 플레이에만 사용되며, 매직 토큰과의 일대일 환전이 불가능합니다!",

[POKER_ACT_PUSH] = "푸시",
[POKER_ACT_BLUFF] = "블러핑",
[POKER_ACT_ALLIN] = "올 인",
[POKER_ACT_BET] = "베팅",
[POKER_ACT_RAISE] = "레이즈",
[POKER_ACT_FOLD] = "폴드",
[POKER_ACT_FOLD_KR] = "다이",
[POKER_ACT_CHECK] = "체크",
[POKER_ACT_CALL] = "콜",

[POKER_HANDRANKING_RSTFL] = "로열 스트레이트 플러시",
[POKER_HANDRANKING_SFL] = "스트레이트 플러시",
[POKER_HANDRANKING_FOUR] = "포 오브 어 카인드",
[POKER_HANDRANKING_FH] = "풀 하우스",
[POKER_HANDRANKING_FL] = "플러시",
[POKER_HANDRANKING_ST] = "스트레이트",
[POKER_HANDRANKING_THRE] = "스리 오브 어 카인드",
[POKER_HANDRANKING_TWOP] = "투 페어",
[POKER_HANDRANKING_ONEP] = "원 페어",
[POKER_HANDRANKING_HIGH] = "하이 카드",

[POKER_MSG_HOWMANYBET] = "얼마나 베팅하시겠습니까?",



// Snake
[SNAKE_PARAM_HEAD_SHAPE] = "머리 모양",
[SNAKE_PARAM_HEAD_COL] = "머리 색상",
[SNAKE_PARAM_TAIL_SHAPE] = "꼬리 모양",
[SNAKE_PARAM_TAIL_COL] = "꼬리 색상",
[SNAKE_PARAM_FOOD_SHAPE] = "먹이 모양",
[SNAKE_PARAM_FOOD_COL] = "먹이 색상",
[SNAKE_PARAM_ENEMY_HEAD_SHAPE] = "적의 머리 모양",
[SNAKE_PARAM_ENEMY_HEAD_COL] = "적의 머리 색상",
[SNAKE_PARAM_ENEMY_TAIL_SHAPE] = "적의 꼬리 모양",
[SNAKE_PARAM_ENEMY_TAIL_COL] = "적의 꼬리 색상",
[SNAKE_PARAM_SPEED_PERLENGTH] = "길이가 길수록 속도가 변화함",
[SNAKE_PARAM_SPEED_PERLIFE] = "오래 버틸수록 속도가 변화함",
[SNAKE_PARAM_SPEED_ROC] = "속도 변화율",
[SNAKE_PARAM_SPEED_NEGATIVE] = "음수",
[SNAKE_PARAM_SPEED_ZERO] = "0",
[SNAKE_PARAM_SPEED_POSITIVE] = "양수",
[SNAKE_PARAM_LIVES] = "생명력 사용",



// Air Hockey
[AIRHOCKEY_PLAYER_VSAI] = "1 vs AI",
[AIRHOCKEY_PLAYER_VSPLAYER] = "1 vs 1",
[AIRHOCKEY_MODE_RUSH] = "러시",
[AIRHOCKEY_MODE_RUSH_DESC] = "제한 시간 안에 가장 많은 골을 낸 사람이 이깁니다.",
[AIRHOCKEY_MODE_FIRSTTO] = "점수내기",
[AIRHOCKEY_MODE_FIRSTTO_DESC] = "가장 먼저 목표 점수에 도달한 사람이 이깁니다.",



// Sudoku
[SUDOKU_PARAM_INPUTMODE_CURSOR] = "키보드 커서",
[SUDOKU_PARAM_INPUTMODE_CURSOR_DESC] = "방향키나 WASD키로 셀을 선택하고 ",
[SUDOKU_PARAM_INPUTMODE_COORDINATES] = "좌표 입력",
[SUDOKU_PARAM_INPUTMODE_COORDINATES_DESC] = "좌표 입력",

[SUDOKU_SOLUTION] = "풀이",
[SUDOKU_SOLUTION_REVEAL] = "풀이 공개",
[SUDOKU_SOLUTION_REVEAL_ASK] = "이번 게임을 포기하고 풀이를 보시겠습니까? 포기로 집계됩니다.",
[SUDOKU_SOLUTION_REVEALED] = "풀이 완료",

[SUDOKU_FINISHED] = "FINISHED!",
[SUDOKU_FINISHED_PLAYAGAIN] = "Would you like to play the same puzzle again?",



// 31 Game
[THIRTYONE_PARAM_MAXREACH] = "도달 가능한 최대값",
[THIRTYONE_PARAM_MAXCALL] = "한 번에 부를 수 있는 최대값",



// Draughts
[DRAUGHTS_MAN_BLACK] = "흑",
[DRAUGHTS_MAN_WHITE] = "백",
[DRAUGHTS_MAN_KING] = "킹",
[DRAUGHTS_MODE_INTERNATIONAL] = "국제 표준",
[DRAUGHTS_MODE_ANGLO] = "영미식 체커",
[DRAUGHTS_MODE_ANGLO_AKA] = "스트레이트",
[DRAUGHTS_MODE_RUSSIAN] = "러시아식 체커",
[DRAUGHTS_MODE_RUSSIAN_AKA] = "샤쉬키",
[DRAUGHTS_MODE_BRAZILIAN] = "브라질식 체커",
[DRAUGHTS_MODE_CANADIAN] = "캐나다식 체커",
[DRAUGHTS_MODE_ITALIAN] = "이탈리아식 체커",

[DRAUGHTS_PARAM_BOARDSIZE] = "보드 크기",
[DRAUGHTS_PARAM_BACKWARDCAPTURING] = "후진하여 포획하기",
[DRAUGHTS_PARAM_KINGCAPTUREING] = "킹 포획하기",
[DRAUGHTS_PARAM_KINGCAPTUREING_ANYONE] = "모든 기물로 가능",
[DRAUGHTS_PARAM_KINGCAPTUREING_KINGONLY] = "킹으로만 가능",
[DRAUGHTS_PARAM_KINGPRIORIZE] = "킹이 우선권을 가짐",
[DRAUGHTS_PARAM_CAPTUREFORCE] = "더 많은 포획의 강제성",
[DRAUGHTS_PARAM_FLIPSIDES] = "좌우 반전",



// Chess
[CHESS_PIECE_BLACK] = "흑",
[CHESS_PIECE_WHITE] = "백",
[CHESS_PIECE_KING] = "킹",
[CHESS_PIECE_QUEEN] = "퀸",
[CHESS_PIECE_ROOK] = "룩",
[CHESS_PIECE_BISHOP] = "비숍",
[CHESS_PIECE_KNIGHT] = "나이트",
[CHESS_PIECE_PAWN] = "폰",



// Gomoku
[GOMOKU_PIECE_BLACK] = "흑돌",
[GOMOKU_PIECE_WHITE] = "백돌",

};