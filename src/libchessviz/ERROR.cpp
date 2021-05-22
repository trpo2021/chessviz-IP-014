#include <iostream>
#include <libchessviz/ERROR.h>
using namespace std;
void ERROR(int number)
{
    switch (number) {
    case 1:
        cout << "error1-invalid input" << endl;
        break;
    }
}
