#include <stdio.h>
int main (){

 char  i = 'g' ;
 char* j = &i;     // j is an chracter pointer
 float k = 6.02;
 float* l = &k;
 printf("the adress of i is %p\n",&i);
 printf("the adress of i is %p\n",j);
 printf("the adress of i is %p\n",l);

printf("\n");
printf ("the value of i is %d\n",*(&i));
printf ("the value of i is %d\n",*j);


    return 0;
}