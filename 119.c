#include <stdio.h>
#include <stdlib.h>
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}
int isValidInteger(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) {
            return 0; 
        }
    }
    return 1; 
}
int main() {
    int n, key;
    char input[100];
    //printf("Enter the size of the array: ");
    fgets(input, sizeof(input), stdin);
    if (sscanf(input, "%d", &n) != 1 || n <= 0) {
        printf("Invalid input! Array size must be greater than 0\n");
        return 1;
    }
    int arr[n];
   // printf("Enter %d elements of the array: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input! Please enter only integers\n");
            return 1;
        }
    }
    //printf("Enter the key to search: ");
    fgets(input, sizeof(input), stdin);  
    fgets(input, sizeof(input), stdin);  
    if (isValidInteger(input)) {
        key = atoi(input);
    } else {
        printf("Invalid input! Please enter a valid integer for the search key\n");
        return 1;
    }
    int index = linearSearch(arr, n, key);

    if (index == -1) {
        printf("Element not found in the array\n");
    } else {
        printf("Element found at index %d\n", index);
    }
    return 0;
}
