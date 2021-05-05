#include <libchessviz/column.h>
int column(int stolb)
{
    int i, flag1 = 0;
    for (i = 1; i < 9; i++) {
        if (stolb == i)
            flag1 = 1;
    }
    if (flag1 == 0)
        return 1;
    else
        return 0;
}
