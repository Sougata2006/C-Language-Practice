#include <stdio.h>
int main()
{
    int days;
    float fine=0.0;
    
    //printf("Enter the days you delayed to submit your book ");
    
    
     if(scanf("%d",&days)!=1){
      printf("Invalid input. Please enter a valid integer.");
      return 1;
    }
    if(days<0){
      printf("Invalid input. Number of days cannot be negative.");
      return 1;
    }
    
    if(days==0){
      printf("No fine");
      return 0;
    }
    else if(days>=1&&days<=5){
      fine = days*0.50;
      printf("Fine: %.2f INR",fine);
    }
    else if(days>=6&&days<=10){
      fine = days*1.00;
      printf("Fine: %.2f INR",fine);
    }
    else if(days>=11&&days<=30){
      fine = days*5.00;
      printf("Fine: %.2f INR",fine);
    }
    else if(days>30){
      printf("membership cancelled");
    }
    return 0;
}

