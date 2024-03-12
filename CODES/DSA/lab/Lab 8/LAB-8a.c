//Write a C program to implement Circular queue operations (enqueue,dequeue,display) using array.
#include <stdio.h>
#define max 5
int front = -1;
int rear = -1;
int queue[max];
void insert() 
{
    if(rear == max-1 && front ==0 || front == rear +1)
        printf("Queue is full>>\n");
    else 
    {
        int insert_element;
        printf("Enter element: ");
        scanf("%d", &insert_element);
        if(front == -1 && rear == -1)
            front = rear =  0;
        else if(rear == max-1 && front != 0)
            rear = 0;
        else
            rear++;
        queue[rear] = insert_element;
    }
}
void delete() 
{
    if(rear == -1 || front - rear == 1)
        printf("Queue is empty>>\n");
    else 
    {
        printf("Deleted element is %d\n", queue[front]);
        if(front == rear)
            front = rear = -1;
        else if (front == max -1)
            front = 0;
        else
            front++;
    }
}
void display() 
{
    if(rear == -1)
        printf("Queue is empty>>\n");
    else 
    {
        printf("Elements of the circular queue are: ");
        if(rear > front) 
        {
            for(int i=front; i<=rear; i++)
                printf("%d  ", queue[i]);
        }
        else 
        {
            for(int i=front; i<=max-1 ;i++)
                printf("%d  ", queue[i]);
            for(int i=0; i<=rear ;i++)
                printf("%d  ", queue[i]);
        }  
        printf("\n");
    }
}
int main() 
{
    int choice;
    do 
    {
        printf("\nEnter 1 to Insert element: \nEnter 2 to delete element: \nEnter 3 to display element: \nEnter 0 to exit: \n");
        scanf("%d", &choice);
        switch (choice) 
        {
        case 0:
            printf("Exited the program successfully!");
            break;
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        default:
            printf("Enter valid number!!\n");
            break;
        }
    } while(choice != 0);
    return 0;
}