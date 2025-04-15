#include <stdio.h>

int main() {
    int n, sum = 0;

    //printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    //printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }

    printf("Sum of even numbers: %d\n", sum);

    return 0;
}
