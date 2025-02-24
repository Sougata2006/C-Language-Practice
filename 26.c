#include <stdio.h>
int main (){

int n ;
int prime =0;
printf("enter your number");
scanf("%d",&n);
if (n==1 || n==0){
    printf("this is not prime");

}
else {
int i=2;
while (i<n){
    if (n%i==0 && n!= 2){
        prime =1;
        break;
    }
    i++;
}
if (prime){
    printf("this is not prime");
}
else {
    printf("this is prime");
}


}





    return 0;
}