#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *top=NULL;

void create_sLL()
{
    struct node *new_node,*ptr;
    int data;
    printf("Enter the data\n -1 to exit\n");
    scanf("%d",&data);
    while(data!=-1)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        new_node->data=data;
        if(top==NULL)
        {
            new_node->next=NULL;
            top=new_node;
        }
        else
        {
            ptr=top;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=new_node;
            new_node->next=NULL;
        }
        printf("Enter the data\n -1 to exit\n");
        scanf("%d",&data);
    }
}

void peek()
{
    if(top==NULL)
    {
        printf("The stack is empty\n");
    }
    else
    {
        printf("The element at the top is %d\n",top->data);
    }    
}

void display()
{
    if(top==NULL)
    {
        printf("The stack is empty\n");
    }
    else
    {
        struct node *ptr;
        ptr=top;
        while(ptr!=NULL)
        {
           printf("\t%d\n",ptr->data);
           ptr=ptr->next;
        }
    }
}

void push(int val)
{
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    if(top==NULL)
    {
        ptr->next=NULL;
        top=ptr;
    }
    else
    {
        ptr->next=top;
        top=ptr;
    }
}

void pop()
{
    struct node *ptr;
    ptr=top;
    if(top==NULL)
    {
        printf("The stack is empty\n");
    }
    else
    {
        top=ptr->next;
        free(ptr);
    }
}

int main()
{
    int option,num,data;
    while(1)
    {
    printf("Please choose an option\n1.Create_sLL\n2.DisplayPeek\n3.Push\n4.Pop\n5.Display\n6.Exit\n");
    scanf("%d",&option);
    switch (option)
    {
    case 2:
        peek();
        break;
    
    case 3:
        printf("Enter the number to be inserted\n");
        scanf("%d",&num);
        push(num);
        break;
    
    case 4:
        pop();
        break;
    
    case 5:
        display();
        break;

    case 6:
        exit(0);
        break;
    
     case 1:
        create_sLL();
        break;

    default:
        printf("Please enter a valid input\n");
        break;
    }
    }
   
    return 0;
}
