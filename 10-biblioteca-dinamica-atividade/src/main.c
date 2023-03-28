#include <stdio.h>
#include "funcoes.h"
#include "banner.h"

int main()
{
    int x, y;

    main_banner();
    scanf("%d %d", &x, &y);
    printf("Resultado: %d\n", funcao_04(x, y));

    return 0;
}
