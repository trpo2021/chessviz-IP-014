#include <iostream>
#include <libchessviz/column.h>
#include <libchessviz/line.h>
#include <libchessviz/ERROR.h>
#include <libchessviz/board.h>
#include <stdio.h>
using namespace std;

char move(char chessboard[11][11])
{
    char stroka1, stroka2, stolb;
    int stolb1, stolb2, rline1, rline2, flag1, flag2, flag3, flag4;

    cin >> stroka1;
    cin >> stolb1;
    cin >> stroka2;
    cin >> stolb2;

    flag1 = 0;
    flag2 = 0;
    flag3 = 0;
    flag4 = 0;

    rline1 = line(stroka1);
    if (rline1 == -1)
        flag1 = 1;

    rline2 = line(stroka2);
    if (rline2 == -1)
        flag2 = 1;

    flag3 = column(stolb1);
    flag4 = column(stolb2);

    if (flag1 == 0 && flag2 == 0 && flag3 == 0 && flag4 == 0) {
        stolb = chessboard[stolb1 - 1][rline1];
        chessboard[stolb1 - 1][rline1] = ' ';
        chessboard[stolb2 - 1][rline2] = stolb;
        board(chessboard);
    } else {
        ERROR(1);
    }

    return chessboard[9][10];
}
