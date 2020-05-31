#include"test.h"

int plus(int x, int y)
{
    if (x+y<= 100)
        return x+y;
    else
        return -1;
}

int subtract(int x, int y)
{
    if (x-y > 0)
        return x-y;
    else
        return -1;
}

int multiply(int x, int y)
{
    if (x*y < 100)
        return x*y;
    else
        return -1;
}

int divide(int x, int y)
{
    if (x > y && y != 0 && (double)x / y - x / y == 0)           //被除数必须大于除数
        return x/y;
    else
        return -1;
}
