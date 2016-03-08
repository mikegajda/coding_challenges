#include <stdio.h>
int add(int, int);

int main(void)
{
    int a;
    int b;
    int r;

    r = add(2, 96);
    printf("%d\n", r);
    a = 7;
    b = 3;
    r = add(a, 10);
    printf("%d\n", r);
    r = add(a, b);
    printf("%d\n", r);
    printf("%d\n", add(3, r));
    return (a);
}

int add(int a, int b)
{
    int r;

    r = a + b;
    return (r);
}