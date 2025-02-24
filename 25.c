#include <stdio.h>
int main (){

int n ;
int prime=0;
printf ("enter your number ");
scanf("%d",&n);
if (n==1 || n== 0){
    printf("this is not prime");
}
else{
for (int i =2;i<n;i++)
{
if (n%i==0 && n!=2){
prime=1;
}
}
if (prime=1){
    printf ("this is  prime");
}
else{
    printf("this is not prime");
}
}
    return 0;
}