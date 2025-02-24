#include <stdio.h>

int main(){
int a;
printf("enter your age :");
scanf ("%d",&a);
if (a>60){
    printf ("you are a senior citizen and you can drive\n");
}
else if (a>40){
    printf ("you can drive\n ");
}
else if (a >18){
    printf ("you are adult now you can drive\n");
}


    return 0 ;
}