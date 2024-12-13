#include <stdio.h>

int main (){
int i = 8 ;
int q = 7;
int* j = &i;
printf("the adress of i is %p\n",&i);
printf("the value of i is %d\n",*j);
printf("the value of d is %d\n",q*i);
    return 0;
}