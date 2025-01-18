#include <stdio.h>

int main() {
    char name[50]; 

    printf("Enter your name: "); 
    scanf("%49s", name);       

    printf("Hello, %s! Welcome to the world of C programming.\n", name); 

    return 0; 
}
