#include <stdio.h>
#include <math.h>

int main() {
    int num, sq, temp, count = 0, div, fp, lp, ans;

    printf("Enter number to check Kaprekar: ");
    scanf("%d", &num);

    if (num == 1) {
        printf("Kaprekar number");
        return 0;
    }

    sq = num * num;
    temp = sq;

    while (temp > 0) {
        count++;
        temp /= 10;
    }

    div = pow(10, count / 2);

    fp = sq / div;
    lp = sq % div;

    ans = fp + lp;

    if (ans == num)
        printf("Kaprekar number");
    else
        printf("Not a Kaprekar number");

    return 0;
}
