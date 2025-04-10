#include <stdio.h>
int main()
{
    int n,n1=1,n2=1,next;
    //printf("Enter your number : ");
    
    if(scanf("%d",&n) != 1 || n<=0){
      printf("Invalid input. Please enter a positive integer.");
      return 1;
    }
    
    printf("Fibonacci Series up to %d terms: ",n);

    for(int i=0;i<n;i++){
      
    if(i<=1){
      next =1;
    }
    else{
      next=n1+n2;
      n1=n2;
      n2 =next;
    }
      printf("%d ",next);
    }
    return 0;
}
