#include <stdio.h>
//function prototipe
int sum (int , int );
//function definition
int sum (int x , int y){
printf("the sum is %d\n",x+y);
return x+y;
}
int main (){
    sum(12,10);
    sum(100,200);
    sum(90,434);
int p = sum(100,434); //function call
printf("%d",p);



   
      return 0;
}
