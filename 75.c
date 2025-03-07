#include <stdio.h>
int main (){
float a , b,c,d;
printf("enter your 1st number\n");
scanf("%f",&a);
printf("enter your 2nd number\n");
scanf("%f",&b);
printf("enter your 3rd number\n");
scanf("%f",&c);
printf("enter your 4th number\n");
scanf("%f",&d);
if(a>b&&a>c&&a>d){
    printf("the greatest value is %f",a);
}
else if (b>a &&b>c &&b>d){
    printf("the greatest number is %f",b);
}
else if (c>a &&c>b &&c>d){
    printf("the greatest number is %f",c);
}
else if (d>a &&d>c &&d>b){
    printf("the greatest number is %f",d);
}
return 0;    
}
