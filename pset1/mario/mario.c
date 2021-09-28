#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
 do {
    n = get_int("height: ");
 }while(n < 1 || n > 8);

int k = n * 2;
int x = 1;
 for (int i = n; i > 0; i--) {
    for (int j = 1; j <= k; j++) {
        if(j == n) {
            printf("#  ");
        }else if (j < n) {
            if(j < i && j < n) {
                printf(" ");
            }else {
                printf("#");
            }
        }else {
            if( j - n  <= x) {
                printf("#");
            }
        }
    }
    x++;
    printf("\n");
 }

}