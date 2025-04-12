#include <stdio.h>

int main() {
    int num;

    //printf("Enter a number between 1 and 1000: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter a number between 1 and 1000.");
        return 1;
    }
    if (num < 1 || num > 1000) {
        printf("Invalid input. Please enter a number between 1 and 1000.\n");
        return 1;
    }

    intToRoman(num);

    return 0;
}

void intToRoman(int num) {
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {
            printf("%s", symbols[i]);
            num -= values[i];
        }
    }
    printf("\n");
}

