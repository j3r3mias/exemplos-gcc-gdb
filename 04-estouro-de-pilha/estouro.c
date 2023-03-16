// gcc -o estouro estour.c -g

void f();
void g();

int main()
{
    f();
    return 0;
}

void f()
{
    g();
}

void g()
{
    f();
}
