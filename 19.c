#include <stdio.h>
int main (){

int marks;
printf ("enter your marks : ");
scanf ("%d",&marks);
if (marks<=100 && marks>=90){
    printf("your grade is A");
}
else if (marks<90 && marks >=80){
    printf ("your grade is B");
}
else if (marks <80 && marks >=70){
    printf ("your grade is C");
}
else if (marks < 70 &&marks >=60){
    printf ("your grade is D");
}
else if (marks<60 && marks >=50){
    printf ("your grade is E");
}
else if (marks <50 && marks>0){
    printf ("your grade is F");
}
    return 0;
}