#include <stdio.h>
int main(){
    int num1,p=1,num2,num3 =0,i=0;
    printf("Enter a five digit number: ");
    if(scanf("%d",&num1) != 1 || num1<0 || num1<10000 || num1>99999){
        printf("Error: enter a valid number");
        return 1;
    }
    while (i<5){
        num2 = ((num1/p)%10);
        num3 += ((num2+1)%10*p);
        p *= 10;
        i++;
    }
    printf("The output will be: %d\n",num3);
    return 0;
    
}