//prime or not
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number ");
    scanf("%d",&num);
    
    if(num==2){
        printf("It's a prime number");
    }

        int isprime =1;
    for(int i=2;i<num/2;i++){
        if(num%i == 0){
            //isprime = 0;
            printf("It's not a prime");
            return 0;
        }
    }
        printf("it's a prime");

}
