#include <stdio.h>
int main()
{
    int num,print=1;
    //printf("Enter your number : ");
    if(scanf("%d",&num) != 1 || num<=0){
      printf("Invalid input. Please enter a positive integer.");
      return 1;
    }
    for(int i=1;i<=num;i++){
      for(int j=1;j<=i;j++){
        printf("%d",print);
        print++;
        
        //This statement will help to print the space at the middle of 2 numbers not at the end
        if (i != j) {
          printf(" ");
        }
        
      }
      printf("\n");
    }
    return 0;
}
