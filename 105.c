//Transpose of a 2d array

#include <stdio.h>
int main(){
    int arr[3][3];
    printf("Enter values for each row and column: \n");
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The normal arrays will be : \n");
    for(int i = 0;i<3;i++){
        for(int j= 0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    //Doing transpose of that array
    for(int i = 0;i<3;i++){
        for(int j = i+1;j<3;j++){
            //arr[j][i] = arr[i][j];
             int temp = arr[i][j];
             arr[i][j] = arr[j][i];
             arr[j][i] = temp;
        }
    }
    printf("The transpose of the arrays will be : \n");
    for(int i = 0;i<3;i++){
        for(int j= 0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
