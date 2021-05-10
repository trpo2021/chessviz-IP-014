#include "ctest.h"

CTEST(testfile, test1)
{
    int flag1 = 1;
	int flag2 = 1;
	int result = flag1 + flag2;
	int waitingresult = 2;

    ASSERT_EQUAL(waitingresult, result);
}
