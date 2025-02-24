#include <stdio.h>

void swap (int* x , int * y )
{
int temp ;
temp = *x;
*x = *y ;
*y = temp ;

}


int main (){
int a = 3;
int b = 4;
printf("before swap a=%d and b = %d\n",a,b);
swap(&a,&b);
printf( "after swap a =%d and b = %d",a,b);

    return 0;
}