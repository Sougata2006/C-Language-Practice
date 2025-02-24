// call bt refference

#include <stdio.h>

// call by value 
int sum (int*,int*);
int sum (int* a , int* b ){
    *a = 6;
    return (*a + *b) ;
}
int main (){
    int x = 1, y=6;
    printf ("the value of 1+6 is %d\n",sum(&x,&y));
printf ("the value of x ix %d\n",x);



    return 0;
}