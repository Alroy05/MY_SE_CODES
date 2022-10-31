#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    int priority;
    struct node *next;
};
struct node *start = NULL;

void insert()
{
    struct node *new_node,*ptr;
    int data,pri;
    printf("Enter the data to be inserted and priority");
    scanf("%d%d",&data,&pri);
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=data;
    new_node->priority=pri;
    if(start==NULL || pri < start->priority)
    {
       new_node->next=start;
       start=new_node;
    }
    else
    {
        ptr=start;
        while(ptr->next!=NULL && ptr->next->priority <= pri)
        {
            ptr=ptr->next;
        }
        new_node->next=ptr->next;
        ptr->next=new_node;
    }
}

void delete()
{
    struct node *ptr;
    if(start==NULL)
     printf("UnderFlow!");
    else
    {
        ptr=start;
        start=ptr->next;
        free(ptr);
    }
}

void display()
{
    struct node *ptr;
    if(start==NULL)
    {
        printf("Underflow");
    }
    else
    {
        ptr=start;
        while(ptr!=NULL)
        {
            printf("%d[%d] ",ptr->data,ptr->priority);
            ptr=ptr->next;
        }

    }
}

int main()
{
    int option;
    while(1)
    {
    printf("Please choose an option\n1.Insert\n2.Delete\n5.Display\n6.Exit\n");
    scanf("%d",&option);
    switch (option)
    {
    case 1:
        insert();
        break;

    case 2:
        delete();
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