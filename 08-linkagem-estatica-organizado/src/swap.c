extern int par[];

void swap()
{
    int tmp;
    tmp = par[0];
    par[0] = par[1];
    par[1] = tmp;
}
