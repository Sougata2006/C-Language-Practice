//same thing in loops
#include <stdio.h>
int main (){

int marks [5];
printf("enter the numbers\n");
for(int i=0;i<5;i++){

    scanf("%d",&marks[i]);
}
for(int i=0;i<5;i++){
    printf("the numbers are %d\n",marks[i]);
    
}

    return 0;
}