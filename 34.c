#include <stdio.h>


float c2f (float c){
    return (((9.0*c)/5.0)+32.0);
}

int main (){
float c= 64.0;
printf ("the ferhenhite temp is %f",c2f(c));

    return 0;
}
