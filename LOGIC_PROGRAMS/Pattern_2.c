// 1
// 1 * 1
// 1 * 3 * 1
// 1 * 3 * 5 * 3 * 1

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of lines: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", 2 * j - 1);
            if (j < i) printf(" * ");
        }
        for (int j = i - 1; j >= 1; j--) {
            printf(" * %d", 2 * j - 1);
        }
        printf("\n");
    }
    return 0;
}
