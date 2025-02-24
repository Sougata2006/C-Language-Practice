#include <stdio.h>
int main (){
int m1;
int m2;
int m3;
int m4;
printf ("enter your 1st subjec mark :");
scanf("%d",&m1);
printf ("enter your 2nd sub number :");
scanf("%d",&m2);
printf ("enter your 3rd sub num : ");
scanf("%d",&m3);
printf ("enter your 4th sub num : ");
scanf("%d",&m4);
if(m1<33 || m2<33 || m3<33 || m4<33){
    printf("you failed due to low number in your sub (s)");
}
else if ((m1+m2+m3+m4)/4<40){
    printf ("you failed for low percentage");
}
else{
    printf ("you have passed");
}
    return 0;
}