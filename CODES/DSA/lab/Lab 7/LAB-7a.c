//Write a C program to implement queue operations (enqueue,dequeue,display) using array.
#include<stdio.h>
#define max 5
int front = -1;
int rear = -1;
int queue[max];
void insert()
{
    if(rear >= max-1)
    {
        printf("Queue is full!!");
    }
    else
    {
        int insert_element;
        printf("Enter element: ");
        scanf("%d", &insert_element);
        if(front == -1)
        {
            front = 0;
        }
        rear++;
        queue[rear] = insert_element;
    }
}
void delete()
{
    if(rear == -1 || front > rear)
    {
        printf("Queue is empty!!");
    }
    else
    {
        printf("Deleted element is %d", queue[front]);
        if(front == rear)
        {
            front = rear = -1;
        }
        else
            front++;
    }
}
void display()
{
    if(rear == -1)
    {
        printf("Queue is empty!!");
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            printf("%d ", queue[i]);
        }
    }
}
int main()
{
    int choice;
    do
    {
        printf("\nEnter 0 to exit:  \n");
        printf("Enter 1 to Insert element: \n");
        printf("Enter 2 to delete element: \n");
        printf("Enter 3 to display element: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            printf("Exited Program Successfully...");
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
    }
    while(choice != 0);
    return 0;
}