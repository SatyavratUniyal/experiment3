#include <stdio.h>

int main() {
     int L;
    printf("Enter the limit: ");
    scanf("%d", &L);

    int i, j, k, l;
    int count;

    printf("Ramanujan numbers up to limit %d:\n", L);

    for (int n = 1; n <= L; n++) {
        count = 0;
        
        for (i = 1; i <= n; i++) {
            for (j = i; j <= n; j++) {
                if (i*i*i + j*j*j == n) {
                    count++;
                }
            }
        }
          if (count >= 2) {
            printf("%d\n", n);
        }
    }

    return 0;
}
