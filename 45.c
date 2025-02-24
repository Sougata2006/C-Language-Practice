#include <stdio.h>

int returning (int* a){
    printf("the value of a is %d\n",a);
    printf("the value at a is %d\n",*a);
    return 9;
}

int main (){

int i = 8;
int* a = &i;
printf ("the adress of the variable is %u\n",&i);
// adress = 0061FF1C
returning(a);

    return 0;
}