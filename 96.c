#include <stdio.h>
int main(){
    int num,rev=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num<=0){
        printf("Error: enter a valid number and try again");
        return 1;
    }
    while(num>0){
        rev = rev*10 +num%10;
        num = num/10;
    }
    printf("The reversed number is: %d",rev);
    return 0;
}
