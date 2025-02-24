#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
//project 2----

/*
0=rock
1=paper
2=scissor
*/
srand (time(0));
int player;
int computer = rand()% 3;

printf("0 for rock \n1 for paper \n2 for scissors \nchoose your number\n");
scanf("%d",&player);
if(player>2||player<0)
{
    printf("enter a valid number ");
}
else{
printf("computer choosed %d\n",computer);

if(player==0 && computer==0)
{
    printf("it's a draw");
}
else if(player == 0 && computer== 1)
{
    printf("computer win");
}
else if(player == 0 && computer== 2)
{
    printf("you win");
}
else if(player == 1 && computer== 0)
{
    printf("you win");
}
else if(player == 1 && computer== 1)
{
    printf("it's a draw");
}
else if(player == 1 && computer== 2)
{
    printf("computer win");
}
else if(player == 2 && computer== 0)
{
    printf("computer win");
}
else if(player == 2 && computer== 1)
{
    printf("you win");
}
else if(player == 2 && computer== 2)
{
    printf("it's a draw");
}

}
    return 0;
}