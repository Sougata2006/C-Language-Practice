//Adition of 2 2d arrays

#include <stdio.h>
int main(){
    int arr1[3][3];
    int arr2[3][3];
    int arr3[3][3];

    printf("Enter values for each row and column for first array : \n");
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter values for each row and column for second array: \n");
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            arr3[i][j] = arr1[i][j]+arr2[i][j];
        }
    }
    printf("The adition of these 2 arrays will be : \n");
    for(int i = 0;i<3;i++){
        for(int j= 0;j<3;j++){
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
}
