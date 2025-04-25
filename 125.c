#include <stdio.h>
#include <string.h>
int isValidInteger(char str[]) {
    int i = 0;
    if (str[0] == '-') i = 1;
    for (; str[i] != '\0'; i++) {
        if (!isdigit(str[i]))
            return 0;
    }
    return (i > 0);}
int main() {
    int n;
    char input[20];

    if (scanf("%s", input) != 1 || !isValidInteger(input)) {
        printf("Invalid input! Please enter only integers\n");
        return 0;
    }

    sscanf(input, "%d", &n);

    if (n <= 0 || n > 50) {
        printf("Invalid array size. Size must be between 1 and 50\n");
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        if (scanf("%s", input) != 1 || !isValidInteger(input)) {
            printf("Invalid input! Please enter only integers\n");
            return 0;
        }
        sscanf(input, "%d", &arr[i]);
    }

    for (int i = 1; i < n; i++) {
        int key = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    printf("Final ascending order: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
