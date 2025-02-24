#include <stdio.h>
int main (){
int income;
float tax=0;
printf("enter your salary  ");
scanf("%d",&income);
if ( income <= 250000)
{
    tax = 0;            
}
else if (income>250000 && income <=500000 )
{
   tax = ((income-250000)*0.05);
}
else if (income >500000 && income <=1000000)
{
    tax = (((income-500000)*0.2)+(500000-250000)*0.05);
}
else if ( income >1000000)
{
    tax= (((income-1000000)*0.3)+((1000000-500000)*0.2)+((500000-250000)*0.05));
}

printf("%f",tax);
    return 0;
}