#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    int isprime = 1;
    //printf("Enter your number : ");
    
    if(scanf("%d",&num) != 1){
      printf("Invalid input. Please enter a positive integer.");
      return 1;
    }
    if(num<=0){
      printf("Invalid input. Please enter a positive integer.");
      return 1;
    }
    if(num==1){
      printf("%d is not a prime number.",num);
      return 0;
    }
    for(int i =2;i<=sqrt(num);i++){
      if(num%i==0){
        isprime = 0;
        break;
      }
    }
    if(isprime==0){
      printf("%d is not a prime number.",num);
    }
    else{
      printf("%d is a prime number.",num);
    }
    return 0;
}
