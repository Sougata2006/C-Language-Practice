//Amgstrong number or not for n digis of number 

#include<stdio.h>
#include<math.h>


int main (){
    int num,rem,Anum=0;
    printf("Enter the number ");
    scanf("%d",&num);
    int duplicate = num;
    int count = finddigit(num);
    while (num > 0){
        rem = num%10;
        // Anum += (int)pow(rem,count);
        Anum += (int)round(pow(rem, count));
        num /= 10;
    }
    if(Anum==duplicate){
        printf("It's Amgstrong number");
    }
    else{
        printf("It's not");
    }
}

int finddigit(int num){
    int count=0;
    while (num>0)
    {
        count++;
        num /= 10;
    }
    return count;
}
