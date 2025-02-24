#include <stdio.h>
int main(){

char ch = 'K';
printf("the character is %c\n",ch);
printf ("the value of the character is %d\n",ch);       // 97 to 112 values are lower case
if (ch>=97 && ch<=122){                                  // this is askii value
    printf("this character is lowercase\n");
}
else {
    printf("the character is notlowercase\n");
}


    return 0;
}