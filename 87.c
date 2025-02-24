#include <stdio.h>
int main (){

int i = 5;
printf("the value of i is %d\n",i);
i =i+5;
printf("the value of i is %d\n",i);
i++;
printf("the value of i is %d\n",i);
//++i will incriment 1st and then print 
//i++ will print 1st and then print
// same as minus (-)
    i += 2;
printf("%d",i);
    
    
    return 0;
}