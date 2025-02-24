#include <stdio.h>
int main (){

int arr [3][2];
for(int i = 0;i<3;i++)
{
    for (int j = 0; j<2;j++)
    {
        printf("enter the values of arrays[%d][%d]\n",i,j);
        scanf("%d",&arr[i][j]);
    }
}
for(int i = 0;i<3;i++)
{
    for (int j = 0; j<2;j++)
    {
printf("the value will be [%d][%d] %d\n",i,j,arr[i][j]);
    }
}
    return 0;
}