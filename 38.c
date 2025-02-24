#include <stdio.h>
int main (){

 int i = 7 ;
 int* j = &i;     // j is an intiger pointer
 int k = 100;
 printf("the adress of i is %p\n",&i);
 printf("the adress of i is %p\n",j);
 printf("the adress of i is %p\n",&k);
printf("\n");
printf ("the value of i is %d\n",*(&i));
printf ("the value of i is %d\n",*j);
printf ("the value of i is %d\n",*(&k));



    return 0;
}