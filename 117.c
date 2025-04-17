#include <stdio.h>

int main() {
    int n;

    //printf("Enter the size of the matrix (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: Matrix size must be greater than 0.\n");
        return 1;
    }

    int matrix[n][n];

   // printf("Enter the elements of the matrix (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int maxElement = matrix[0][0];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
            }
        }
    }

    printf("The maximum element in the matrix is: %d\n", maxElement);

    return 0;
}
