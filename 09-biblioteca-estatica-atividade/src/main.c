#include <stdio.h>
#include "funcoes.h"
#include "banner.h"

int main()
{
    int x, y;

    banner();
    scanf("%d %d", &x, &y);
    printf("Media: %.2lf\n", funcao_01(x, y));

    return 0;
}
