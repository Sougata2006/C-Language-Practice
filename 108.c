// Write a program to add all even numbers from an array.

#include<stdio.h>
#define N 100

main()
{
    int A[N], n, i, sum = 0;

    // printf("Enter the no of elements in the array:");
    if (scanf("%d", &n) != 1 || n < 1 || n > N)
    {
        printf("Invalid input. Array size must be between 1 and %d.\n", N);
        return(1);
    }
    else
    {
        for(i = 0; i < n; i++)
        {
          //  printf("Enter the array element A[%d]: ", i);
            scanf("%d", &A[i]);
        }

        printf("\nThe input array is..... ");
        for(i = 0; i < n; i++)
            printf("%d ", A[i]);

        printf("\nThe array elements to be summed are.... ");
        for(i = 0; i < n; i++)
        {
            if(A[i] % 2 == 0)
            {
                printf("%d ", A[i]);
                sum += A[i];
            }
        }

        printf("\nThe final result is .....%d", sum);
    }
    return(0);
}
