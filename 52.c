#include <stdio.h>
int main (){
//ARITHMATIC POINTER--------------------------------
// by using integer
int a= 5;
int *ptr = &a;
printf("the adress of a is %u\n",&a);
printf("the adress of a is %u\n",ptr);
ptr++;
printf("now the value of ptr is %u\n",ptr);

   printf("\n");
 
   printf("\n");

// by using chracter
char k = '9';
char *ur = &k;
printf("the adress of k is %u\n",ur);
ur++;
printf("now the value of ur is %u\n",ur);


 return 0;
}