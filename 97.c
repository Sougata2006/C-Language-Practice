#include <stdio.h>
int main(){
    int marks[5],aggregate = 0,i;
    float percentage;
    printf("Enter the marks obtained in five subjects(out of 100): \n");
    for(i=0;i<5;i++){
        printf("Enter marks(out of 100) for subject %d: ",i+1 );
        if(scanf("%d",&marks[i]) != 1 || marks[i]<0 || marks[i]>100){
            printf("Error: Ivalid input for subject %d\n",i+1);
            return 1;
        }
        aggregate += marks[i];
    }
    percentage = (float) aggregate/5;
    printf("Aggregate marks: %d\n",aggregate);
    printf("Percentage marks: %.2f%%\n",percentage);
    return 0;
}