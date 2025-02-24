#include <stdio.h>
int main (){

int marks[5];
printf("kindly enter your marks in 5 subjects \n");
scanf("%d\n",&marks[0]);
scanf("%d\n",&marks[1]);
scanf("%d\n",&marks[2]);
scanf("%d\n",&marks[3]);
scanf("%d\n",&marks[4]);

printf("the marks in 1st and 5th subs are %d\n %d\n",marks[0],marks[4]);
    return 0;
}