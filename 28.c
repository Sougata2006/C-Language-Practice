#include <stdio.h>
int main (){

int n ;
int prime =0;
int i;
printf("enter your number");
scanf("%d",&n);
if (n==1 || n==0){
    printf("this is not prime");

}
else {
int i=2;
do{
    if (n%i==0 && n!= 2){
        prime =1;
        break;
    }
    i++;
}while (i<n);
if (prime){
    printf("this is not prime");
}
else {
    printf("this is prime");
}




}

    return 0;
}