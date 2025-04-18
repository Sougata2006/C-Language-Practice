#include <stdio.h>
#include <stdlib.h>

void transposeMatrix(int matrix[][100], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int temp = matrix[i][j]; 
      matrix[i][j] = matrix[j][i]; 
      matrix[j][i] = temp; 
             }
          }
      }

void printMatrix(int matrix[][100], int n) { 
  for (int i = 0; i < n; i++) { 
    for (int j = 0; j < n; j++) {
      printf("%d", matrix[i][j]);
      
      if (j != n - 1) printf(" ");
      } printf("\n"); } }

int main() { int n;

if (scanf("%d", &n) != 1 || n <= 0) {
    printf("Error: Matrix size must be greater than 0.\n");
    return 1;
}

int matrix[100][100];

for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        if (scanf("%d", &matrix[i][j]) != 1) {
            printf("Invalid input! Please enter only integers\n");
            return 1;
        }
    }
}

// printf("Original matrix:\n");
// printMatrix(matrix, n);

transposeMatrix(matrix, n);

printf("Transposed Matrix:\n");
printMatrix(matrix, n);

return 0;
}
