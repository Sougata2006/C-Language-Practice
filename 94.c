#include <stdio.h>
int main(){
 int num,sum=0;
 printf("enter number");
 if(scanf("%d",&num) != 1){
    printf("Error");
    return 1;
 }   
 while(num){
    sum += num%10;
    num /= 10;
 }
 printf("SUM IS %d\n",sum);
 return 0;

}
