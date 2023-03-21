// gcc -o prog main.c -L. -lfuncoes
#include <stdio.h>
#include "funcoes.h"

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("Media: %.2lf\n", funcao_01(x, y));

    return 0;
}
