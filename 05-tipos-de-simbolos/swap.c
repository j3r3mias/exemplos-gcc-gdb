extern int par[];

static int *p0, *p1;

void swap()
{
    int tmp;

    p0 = &par[0];
    p1 = &par[1];

    tmp = *p0;
    *p0 = *p1;
    *p1 = tmp;
}
