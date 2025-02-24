#include <stdio.h>
int main (){
    int prime = 0;
    int n =2;
    int i;
    for (int i = 2 ;i < n;i++)
    {
        if(n%i==0 && n!=2){
            prime = 1;
            break;
        }
    }

    if (prime){
        printf("%d is not prime \n ",n);
    }
    else{
        printf("%d is  prime",n);
    }
    return 0;
}