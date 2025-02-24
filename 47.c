#include <stdio.h>

int* sum (int a , int b ){
    int sum = a+b;
    int* k = &sum;
printf("the sum is %d\n",sum);
return k;
}
float* average (int a , int b ){
    float average = (a+b)/2.0;
float* l = &average;
printf("the average is %.2f\n",average);
return l;
}


int main (){
    int a = 9;
    int b = 6;
    int* k;
    float* l;
k = sum(a,b);
l = average(a,b);
printf("the adress of the sum is %d\n and the adress of the sum is %d\n",k,l);
    return 0;
}