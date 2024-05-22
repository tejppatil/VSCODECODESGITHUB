//Write a C program to implement Stack operations using Linked List.
#include <stdio.h>
#include <stdlib.h>

// Define the structure for a stack node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new stack node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode != NULL) {
        newNode->data = value;
        newNode->next = NULL;
    }
    return newNode;
}

// Function to push (insert) an element onto the stack
void push(struct Node** top, int value) {
    struct Node* newNode = createNode(value);
    if (newNode != NULL) {
        newNode->next = *top;
        *top = newNode;
    }
}

// Function to pop (remove) an element from the stack
void pop(struct Node** top) {
    if (*top != NULL) {
        struct Node* temp = *top;
        *top = (*top)->next;
        free(temp);
    }
}

// Function to display the stack
void displayStack(struct Node* top) {
    printf("Stack: ");
    while (top != NULL) {
        printf("%d ", top->data);
        top = top->next;
    }
    printf("\n");
}

int main() {
    struct Node* top = NULL;
    int choice, value;

    while (1) {
        printf("\nStack Operations:\n");
        printf("1. Push (Insert)\n");
        printf("2. Pop (Delete)\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(&top, value);
                break;
            case 2:
                pop(&top);
                break;
            case 3:
                displayStack(top);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
