#include <stdio.h>

// call by value 
int sum (int,int);
int sum (int a , int b ){
    return a +b ;
}
int main (){
    printf ("the value of 1+6 is %d\n",sum(1,6));




    return 0;
}