#include <stdio.h>

int main(void)
{
    int n;
    int j;
    for ( n = 5; n > 0; n--) {
        for ( j = 0; j < n; j++) {
            printf("%d", j);
        }
    }
    printf("\n");
}
