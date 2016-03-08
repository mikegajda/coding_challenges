#include <stdio.h>

void f(int n);

int main(void)
{
    int n = 5;

    if (n > 1) {
        n = 1;
    }
    if (n >= 4) {
        printf("B");
    }
    else {
        f(n);
    }
    return (0);
}

void f(int n)
{
    printf("%d\n", n);
}