#include <iostream>
#include <libchessviz/board.h>
#include <stdio.h>
using namespace std;

void board(char chessboard[11][11])
{
    int i, z;
    for (i = 0; i < 8; i++) {
        for (z = 0; z < 9; z++) {
            if (z == 1)
                cout << chessboard[i][z];
            else
                cout << chessboard[i][z];
        }
        cout << "\n";
    }
    cout << "\nabcdefgh";
    cout << "\n";
}
