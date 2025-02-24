#include <stdio.h>
int main (){

int k ;
printf("add your number : ");
scanf("%d",&k);
if (k<=100 && k>=90){
    printf("you got a A grade");
}
else if (k<90 && k >=80){
    printf("you got a B grade");
}
else if (k<80 && k >=70){
    printf("you got a C grade");
}
else if (k<60 && k >=50){
    printf ( "you got a D grade");
}
else {
    printf("you failed");
}
    return 0;
}