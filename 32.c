#include <stdio.h>

int factorial (int);

int factorial(int n){
    if (n==1||n==0){   //base condition
        return 1;
    }
    return factorial(n-1)*n;
}


int main (){
int a = 2;
//printf("the ans is %d",a,factorial(a));
printf("The factorial of %d is %d\n", a, factorial(a));
    return 0;
}