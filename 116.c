#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main() {
    int matrix[SIZE][SIZE];
    char input[50];
    
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (scanf("%s", input) != 1) {
                printf("Error: Invalid character detected. Please enter only numeric values.\n");
                return 1;
            }
            
            for (int k = 0; input[k] != '\0'; k++) {
                if (!isdigit(input[k]) && input[k] != '-' && input[k] != '+') {
                    printf("Error: Invalid character detected. Please enter only numeric values.    \n");
                    return 1;
                }
            }
            
            matrix[i][j] = atoi(input);
        }
    }
    
    printf("Main diagonal elements: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d", matrix[i][i]);
        if (i != SIZE - 1) printf(" ");
    }
    printf("\n");
    
    printf("Secondary diagonal elements: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d", matrix[i][SIZE - 1 - i]);
        if (i != SIZE - 1) printf(" ");
    }
    printf("\n");
    
    return 0;
}
