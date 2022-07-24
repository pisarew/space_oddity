#include <ncurses.h>
#include <stdlib.h>

#define POINT '+'

#define STOP 0
#define LEFT 1
#define RIGHT 2

#define EXIT -1
  /*
  ||
 /||\
 |  |
<||||>
*/

typedef struct Coord {
    int x;
    int y;
} Coord;

void init() {
    initscr();
    savetty();
    nonl();
    cbreak();
    noecho();
    timeout(0);
    leaveok(stdscr, TRUE);
    curs_set(0);
}
void finish() {
    curs_set(1);
    clear();
    refresh();
    resetty();
    endwin();
    exit(0);
}
char** init_board() {
    char** board;
    board = (char**) malloc(LINES * sizeof(char*));
    if (board == NULL)
        return NULL;
    for (int i = 0; i < LINES; ++i) {
        board[i] = (char*) malloc(COLS * sizeof(char));
        if (board[i] == NULL)
            return NULL;
    }
    for (int i = 0; i < LINES; ++i) {
        for (int j = 0; j < COLS; ++j) {
                board[i][j] = ' ';
        }
    }
    return board;
}
void put(char** board, int x, int y, char ch) {
    board[x][y] = ch;
    move(x, y);
    addch(ch);
}
int check_pressing() {
    int keypress;
    keypress = wgetch(stdscr);
    if (keypress == ERR)
        return STOP;
    if (keypress == 'a')
        return LEFT;
    if (keypress == 'd')
        return RIGHT;
    if (keypress == 'q')
        return EXIT;
    return STOP;
}
void logic(char** board, Coord* cur) {
    int key;
    key = check_pressing();
    if (key == LEFT) {
        put(board, cur->x, cur->y, ' ');
        --cur->y;
        --cur->y;
        put(board, cur->x, cur->y, POINT);
        return;
    }
    if (key == RIGHT) {
        put(board, cur->x, cur->y, ' ');
        ++cur->y;
        put(board, cur->x, cur->y, POINT);
        return;
    }
    if (key == EXIT) {
        finish();
    }
}
int main() {
    init();
    char** board;
    Coord current;
    current.x = LINES - 1;
    current.y = COLS / 2 - 1;
    board = init_board();
    put(board, LINES - 1, COLS / 2 - 1, POINT);
    refresh();
    while (1) {
//        napms(1);
        logic(board, &current);
    }
    return 0;
}
