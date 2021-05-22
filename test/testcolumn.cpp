#include "ctest.h"
#include <libchessviz/column.h>

CTEST(testcolumn, test1)
{
    // correct coordinate
    int stolb = 1;
    int flag = column(stolb);
    int waitingresult = 0;

    ASSERT_EQUAL(waitingresult, flag);
}

CTEST(testcolumn, test2)
{
    // correct coordinate
    int stolb = 4;
    int flag = column(stolb);
    int waitingresult = 0;

    ASSERT_EQUAL(waitingresult, flag);
}

CTEST(testcolumn, test3)
{
    // correct coordinate
    int stolb = 7;
    int flag = column(stolb);
    int waitingresult = 0;

    ASSERT_EQUAL(waitingresult, flag);
}

CTEST(testcolumn, test4)
{
    // incorrect coordinate
    int stolb = 10;
    int flag = column(stolb);
    int waitingresult = 1;

    ASSERT_EQUAL(waitingresult, flag);
}

CTEST(testcolumn, test5)
{
    // incorrect coordinate
    int stolb = 54;
    int flag = column(stolb);
    int waitingresult = 1;

    ASSERT_EQUAL(waitingresult, flag);
}

CTEST(testcolumn, test6)
{
    // incorrect coordinate
    int stolb = -1;
    int flag = column(stolb);
    int waitingresult = 1;

    ASSERT_EQUAL(waitingresult, flag);
}
