#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isValidInteger(char str[]) {
    int i = 0;
    if (str[0] == '-') i = 1;
    for (; str[i] != '\0'; i++) {
        if (!isdigit(str[i]))
            return 0;
    }
    return (i > 0);
}

int main() {
    int m1, n1, m2, n2;

    if (scanf("%d %d", &m1, &n1) != 2 || m1 <= 0 || n1 <= 0) {
        printf("Invalid input! Please enter only integers\n");
        return 0;
    }

    if (scanf("%d %d", &m2, &n2) != 2 || m2 <= 0 || n2 <= 0) {
        printf("Invalid input! Please enter only integers\n");
        return 0;
    }

    if (n1 != m2) {
        printf("Matrix multiplication not possible. Columns of A must match rows of B\n");
        return 0;
    }

    int A[m1][n1], B[m2][n2], C[m1][n2];
    char input[20];

    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            scanf("%s", input);
            if (!isValidInteger(input)) {
                printf("Invalid input! Please enter only integers\n");
                return 0;
            }
            sscanf(input, "%d", &A[i][j]);
        }
    }

    for (int i = 0; i < m2; i++) {
        for (int j = 0; j < n2; j++) {
            scanf("%s", input);
            if (!isValidInteger(input)) {
                printf("Invalid input! Please enter only integers\n");
                return 0;
            }
            sscanf(input, "%d", &B[i][j]);
        }
    }

    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Resultant Matrix (A x B):\n");
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
