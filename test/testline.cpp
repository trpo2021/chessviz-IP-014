#include "ctest.h"
#include <libchessviz/line.h>

CTEST(testline, test1)
{
	//correct coordinate
    char stroka = 'b';
	int flag = line(stroka);
	int waitingresult = 2;

    ASSERT_EQUAL(waitingresult, flag);
}

CTEST(testline, test2)
{
	//correct coordinate
    char stroka = 'f';
	int flag = line(stroka);
	int waitingresult = 6;

    ASSERT_EQUAL(waitingresult, flag);
}

CTEST(testline, test3)
{
	//correct coordinate
    char stroka = 'h';
	int flag = line(stroka);
	int waitingresult = 8;

    ASSERT_EQUAL(waitingresult, flag);
}

CTEST(testline, test4)
{
	//incorrect coordinate
    char stroka = 'u';
	int flag = line(stroka);
	int waitingresult = -1;

    ASSERT_EQUAL(waitingresult, flag);
}

CTEST(testline, test5)
{
	//incorrect coordinate
    char stroka = 'x';
	int flag = line(stroka);
	int waitingresult = -1;

    ASSERT_EQUAL(waitingresult, flag);
}

CTEST(testline, test6)
{
	//incorrect coordinate
    char stroka = 'p';
	int flag = line(stroka);
	int waitingresult = -1;

    ASSERT_EQUAL(waitingresult, flag);
}

