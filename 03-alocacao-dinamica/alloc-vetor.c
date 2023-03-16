// gcc -o alloc-vetor alloc-vetor.c -g
#include <stdlib.h>

int main()
{
    int *vet = (int *)malloc(sizeof(int) * 4);

    *vet = 5;
    vet[1] = 31;
    2[vet] = 37;
    *(vet + 3) = 65;

    free(vet);
    return 0;
}
