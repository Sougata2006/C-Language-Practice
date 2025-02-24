#include <stdio.h>

float force (float m) {
    return (m*9.8);
}
int main (){
   
float m =10;
printf( " the fource will be %f",force(m));
return 0;
}