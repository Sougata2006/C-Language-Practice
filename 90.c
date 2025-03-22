#include <stdio.h>
int main (){

// do while loops exicute only once

int num ,i =0;
printf("enter your number : \n");
scanf("%d",&num);
do{
    printf("%d\n",i);
    i++;
}while (i<num);
    return 0;
}
