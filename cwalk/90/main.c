#include <stdio.h>

int main(void)
{
    int n = 5;
    int j;
    while (n > 0) {
        j = 0;
        while (j < n) {
            printf("%d", j);
            j++;
        }
        n--;
    }
    printf("\n");
}