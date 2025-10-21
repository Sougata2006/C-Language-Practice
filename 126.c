// QUEUE IMPLIMENTATION BY ARRAY

#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue();
void dequeue();
void display();

int main() {
    int choice;

    while (1) {
        printf("\n--- Queue Menu ---\n");
        printf("1. Enqueue: Enter element in queue\n");
        printf("2. Dequeue: Delete element from queue\n");
        printf("3. Display queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: enqueue(); 
                break;
            case 2: dequeue(); 
                break;
            case 3: display(); 
                break;
            case 4: 
                printf("TNXX BUDDY\n");
                exit(0);
            default: 
                printf("Invalid choice!\n");
        }
    }
    return 0;
}

void enqueue() {
    int val;
    if (rear == MAX - 1) {
        printf("Queue Overflow!\n");
    } else {
        printf("Enter value to enqueue: ");
        scanf("%d", &val);
        if (front == -1) 
            front = 0;
        rear += 1;
        queue[rear] = val;
        printf("%d enqueued to queue.\n", val);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow!\n");
        front = rear = -1;  
    } else {
        printf("%d dequeued from queue.\n", queue[front]);
        front += 1;
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}
