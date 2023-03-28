#include <math.h>

double funcao_01(int x, int y)
{
    return ((double) x + (double) y) / 2.0;
}

int funcao_02(int x)
{
    return x * x;
}

int funcao_03(int y)
{
    return funcao_02(y) * funcao_02(y);
}

int funcao_04(int x, int y)
{
    return funcao_03(x) + funcao_02(y);
}

double funcao_05(int x, int y)
{
    return sqrt(x) + sqrt(y);
}
