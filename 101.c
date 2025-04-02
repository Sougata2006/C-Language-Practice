#include <stdio.h>
int main()
{
    int num;
    //printf("Enter your number : ");
    if(scanf("%d",&num) != 1 || num<=0){
      printf("Invalid input. Please enter a positive integer.");
    }
    for(int i=1;i<=num;i++){
      for(int j=1;j<=i;j++){
        printf(i+" ");
        i++;
      }
      printf("\n");
    }
}
