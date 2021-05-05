#include <iostream>
#include <libchessviz/board.h>
#include <libchessviz/move.h>
using namespace std;

int main()
{
    char chessboard[11][11]
            = {"1rnbqkbnr",
               "2pppppppp",
               "3        ",
               "4        ",
               "5        ",
               "6        ",
               "7PPPPPPPP",
               "8RNBQKBNR"};
    board(chessboard);
    while (1) {
        move(chessboard);
    }
    return 0;
}
