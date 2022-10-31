#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int queue[MAX];
int front =-1,rear = -1;

void insert()
{
    int data;
    printf("Enter the data\n");
    scanf("%d",&data);
    if(front == 0 && rear == MAX-1)
    {
        printf("OVERFLOW!\n");
    }
    else if(front == -1 && rear == -1)
    {
        rear = front = 0;
        queue[rear]=data;
    }
    
    else if(front!=0 && rear == MAX-1)
    {
        rear=0;
        queue[rear]=data;
    }
    else 
    {
        rear++;
        queue[rear]=data;
    }
}

void delete()
{
    if(front == -1 && rear == -1)
    {
        printf("Underflow!");
    }
    else if(front==rear)
    {
        front = rear = -1;
    }
    else
    {
        if(front==MAX-1)
        front=0;
        else
        front++;
    }
}

void display()
{
    if(rear==-1 && front==-1)
    {
        printf("The queue is empty\n");
    }
    else 
    {
        if(front<rear)
        {
            for(int i =front;i<=rear;i++)
            {
            printf("\t%d",queue[i]);
            }
            printf("\n");
        }
        else
        {
            for(int i =front;i<MAX;i++)
              printf("\t%d",queue[i]);
            for(int i=0;i<=rear;i++)
              printf("\t%d",queue[i]);
        }
    }
}

void create_Cqueue()
{
    int num;
    printf("Enter the data\nEnter -1 to exit");
    scanf("%d",&num);
    front=0;
    while(num!=-1)
    {  
        if(rear==MAX-1)
        {
            printf("Overflow");
        }
        else
        {
            rear++;
            queue[rear]=num;
            printf("Enter the data\nEnter -1 to exit");
            scanf("%d",&num);
        }
    }
}

int main()
{
    int option,num,data;
    while(1)
    {
    printf("Please choose an option\n1.Insert\n2.Delete\n3.Create_Queue\n5.Display\n6.Exit\n");
    scanf("%d",&option);
    switch (option)
    {
    case 1:
        insert();
        break;

    case 2:
        delete();
        break;
    
    case 3:
        create_Cqueue();
        break;
    
    case 5:
        display();
        break;

    case 6:
        exit(0);
        break;
    

    default:
        printf("Please enter a valid input\n");
        break;
    }
    }
   
    return 0;
}