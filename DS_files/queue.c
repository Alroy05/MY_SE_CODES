#include<stdio.h>
#include<stdlib.h>

#define MAX 10
int front=-1,rear=-1;
int queue[MAX];

void insert()
{
    int num;
    printf("Enter the number to be inserted\n");
    scanf("%d",&num);
    if(rear==MAX-1)
    {
        printf("Overflow\n");
    }
    else if(rear==-1 && front ==-1)
    {
        rear=front=0;
        queue[rear]=num;
    }
    else
    {
        rear++;
        queue[rear]=num;
    }
}

void delete()
{
    if(rear ==-1 && front==-1 )
      printf("The queue is empty\n");
    else
    {
      front++;
      if(front>rear)
        front=rear=-1;
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
        for(int i =front;i<=rear;i++)
        {
            printf("\t%d",queue[i]);
        }
        printf("\n");
    }
}

void create_queue()
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
    printf("Please choose an option\n1.Insert\n2.Delete\n3.Create_Queue\n4.dequeuerear\n5.Display\n6.Exit\n");
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
        create_queue();
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