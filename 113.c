#include <stdio.h>
int main()
{
    int array_num; 
    // printf("Enter the number of element you want to enter : ");
    scanf("%d",&array_num);
    if(array_num<=0){
      printf("Invalid input! Array size must be greater than 0");
      return 0;
    }
    int arr[array_num];
    // printf("Enter the values : ");
    for(int i = 0;i<array_num;i++){
      if(scanf("%d",&arr[i]) != 1){
        printf("Invalid input! Please enter only integers");
        return 1;
      }
    }
    int max_ele=arr[0];
    int min_ele=arr[0];
    
    for(int j =1;j<array_num;j++){
      if(max_ele<arr[j]){
        max_ele = arr[j];
      }
      if(min_ele>arr[j]){
        min_ele = arr[j];
      }
    }
    printf("Maximum element: %d\n",max_ele);
    printf("Minimum element: %d\n",min_ele);
    
    return 0;
}
