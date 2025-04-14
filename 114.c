#include <stdio.h>

int main() {
    int n;

    //printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    //printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    swapAdjacent(arr, n);

    printf("Array after interchanging odd and even components: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


void swapAdjacent(int arr[], int n) {
    for (int i = 0; i < n - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

