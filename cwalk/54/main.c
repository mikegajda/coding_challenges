#include <stdio.h>
void f(int);

int main(void)
{
    int n;

    n = 98;
    f(402);
    printf("\n");
    f(n);
    printf("\n");
    return (0);
}

void f(int n)
{
    printf("%d", n);
}
