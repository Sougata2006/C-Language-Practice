#include <stdio.h>

// float average (float a, float b, float c );

float average (float a, float b, float c){
    return (a+b+c)/3.0;
}
int main (){
float a=4.8;
float b = 7.5;
float c=9.5;
printf("the average is %f",average (a, b, c) );
    return 0;
}