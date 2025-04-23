#include <stdio.h>

int main() {
    int m, n;

    if (scanf("%d %d", &m, &n) != 2 || m <= 0 || n <= 0 || m != n) {
        printf("Both matrices must have the same dimensions\n");
        return 1;
    }
    
    int mat1[m][n], mat2[m][n], add_result[m][n], sub_result[m][n];


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (scanf("%d", &mat1[i][j]) != 1) {
                printf("Invalid input! Please enter only integers\n");
                return 1;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (scanf("%d", &mat2[i][j]) != 1) {
                printf("Invalid input! Please enter only integers\n");
                return 1;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            add_result[i][j] = mat1[i][j] + mat2[i][j];
            sub_result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }

    printf("Addition result:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", add_result[i][j]);
        }
        printf("\n");
    }

    printf("Subtraction result:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", sub_result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
