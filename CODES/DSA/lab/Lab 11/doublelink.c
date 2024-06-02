//Write a C program to implement Doubly Linked List operations
#include <stdio.h>
#include <stdlib.h>

// Define the structure for a doubly linked list node
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode != NULL) {
        newNode->data = value;
        newNode->prev = NULL;
        newNode->next = NULL;
    }
    return newNode;
}

// Function to insert a node at the beginning of the list
void insertAtBegin(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    if (newNode != NULL) {
        newNode->next = *head;
        if (*head != NULL) {
            (*head)->prev = newNode;
        }
        *head = newNode;
    }
}

// Function to insert a node at the end of the list
void insertAtEnd(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    if (newNode != NULL) {
        if (*head == NULL) {
            *head = newNode;
        } else {
            struct Node* temp = *head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
    }
}

// Function to insert a node at a specific index
void insertAtIndex(struct Node** head, int value, int index) {
    if (index < 0) {
        printf("Invalid index. Cannot insert.\n");
        return;
    }

    if (index == 0) {
        insertAtBegin(head, value);
        return;
    }

    struct Node* newNode = createNode(value);
    if (newNode != NULL) {
        struct Node* temp = *head;
        for (int i = 0; i < index - 1 && temp != NULL; ++i) {
            temp = temp->next;
        }
        if (temp == NULL) {
            printf("Index out of range. Cannot insert.\n");
            free(newNode);
            return;
        }
        newNode->next = temp->next;
        if (temp->next != NULL) {
            temp->next->prev = newNode;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

// Function to display the doubly linked list
void displayList(struct Node* head) {
    printf("Doubly Linked List: ");
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Function to delete the first node
void deleteAtBegin(struct Node** head) {
    if (*head != NULL) {
        struct Node* temp = *head;
        *head = (*head)->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
        free(temp);
    }
}

// Function to delete the last node
void deleteAtEnd(struct Node** head) {
    if (*head == NULL) {
        return;
    }

    if ((*head)->next == NULL) {
        deleteAtBegin(head);
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    if (temp->prev != NULL) {
        temp->prev->next = NULL;
    }
    free(temp);
}

// Function to delete a node at a specific index
void deleteAtIndex(struct Node** head, int index) {
    if (index < 0 || *head == NULL) {
        printf("Invalid index or empty list. Cannot delete.\n");
        return;
    }

    if (index == 0) {
        deleteAtBegin(head);
        return;
    }

    struct Node* temp = *head;
    for (int i = 0; i < index && temp != NULL; ++i) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Index out of range. Cannot delete.\n");
        return;
    }
    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    }
    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }
    free(temp);
}

int main() {
    struct Node* head = NULL;
    int choice, value, index;

    while (1) {
        printf("\nDoubly Linked List Operations:\n");
        printf("1. Insert at Begin\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Index\n");
        printf("4. Display\n");
        printf("5. Delete at Begin\n");
        printf("6. Delete at End\n");
        printf("7. Delete at Index\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insertAtBegin(&head, value);
                break;
            case 2:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insertAtEnd(&head, value);
                break;
            case 3:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                printf("Enter index: ");
                scanf("%d", &index);
                insertAtIndex(&head, value, index);
                break;
            case 4:
                displayList(head);
                break;
            case 5:
                deleteAtBegin(&head);
                break;
            case 6:
                deleteAtEnd(&head);
                break;
            case 7:
                printf("Enter index to delete: ");
                scanf("%d", &index);
                deleteAtIndex(&head, index);
                break;
            case 8:
                exit(0);
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}