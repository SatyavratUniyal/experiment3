#include <stdio.h>

int main() {
    int rows = 3; 
    int i, j, k;
    int num = 1; 

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (k = 1; k <= i; k++) {
            printf("%d ", num++);
        }
        printf("\n");
    }

    return 0;
}