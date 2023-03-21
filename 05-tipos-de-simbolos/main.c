// gcc -o programa main.c swap.c
#include <stdio.h>
#include "swap.h"

int par[] = {1, 2};

int main()
{
    swap();
    printf("%d - %d\n", par[0], par[1]);
    return 0;
}
