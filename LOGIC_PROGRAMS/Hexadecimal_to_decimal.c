#include <stdio.h>
#include <string.h>

int main() {
    char hex[20];
    int dec = 0, base = 1;

    int hmap[256];
    for(int i = 0; i < 256; i++) hmap[i] = -1;

    hmap['A'] = 10;
    hmap['B'] = 11;
    hmap['C'] = 12;
    hmap['D'] = 13;
    hmap['E'] = 14;
    hmap['F'] = 15;
    hmap['a'] = 10;
    hmap['b'] = 11;
    hmap['c'] = 12;
    hmap['d'] = 13;
    hmap['e'] = 14;
    hmap['f'] = 15;

    printf("Enter Hexadecimal Number: ");
    scanf("%s", hex);

    int len = strlen(hex);
    for(int i = len - 1; i >= 0; i--) {
        char ch = hex[i];
        int value;

        if(ch >= '0' && ch <= '9') {
            value = ch - '0';
        } else {
            if(hmap[(int)ch] == -1) {
                printf("Invalid hexadecimal digit: %c\n", ch);
                return 1;
            }
            value = hmap[(int)ch];
        }

        dec += value * base;
        base *= 16;
    }

    printf("Equivalent Decimal is: %d\n", dec);
    return 0;
}
