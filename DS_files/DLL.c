#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *start=NULL;

void createLL()
{
    struct node *new_node,*ptr;
    int num;
    printf("Enter -1 to end\nor Enter data\n");
    scanf("%d",&num);
    while(num!=-1)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        new_node->data=num;
        if(start==NULL)
        { 
            new_node->next=NULL;
            new_node->prev=NULL;
            start=new_node;    
        }
        else
        {
            ptr=start;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            new_node->prev=ptr;
            new_node->next=NULL;
            ptr->next=new_node;
        }
        printf("Enter data or -1 to exit\n");
        scanf("%d",&num);
    }
}
void insert_beg(int val)
{
    struct node *new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    new_node->next=start;
    new_node->prev=NULL;
    start->prev=new_node;
    start=new_node;   
}

void insert_end(int val)
{
    struct node *ptr,*new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    ptr=start;
    new_node->data=val;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=new_node;
    new_node->prev=ptr;
    new_node->next=NULL;
}

void insert_spePos(int pos,int val)
{
    int i;
    struct node *ptr,*new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    ptr=start;
    new_node->data=val;
    for(i =1;i<pos;i++)
    {
        ptr=ptr->next;
    }
    new_node->next=ptr;
    new_node->prev=ptr->prev;
    ptr->prev->next=new_node;
    ptr->prev=new_node;
}

void delete_beg()
{
    struct node *ptr;
    ptr=start;
    start=ptr->next;
    ptr->next->prev=NULL;
    free(ptr);
}

void delete_end()
{
    struct node *ptr;
    ptr=start;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->prev->next=NULL;
    free(ptr);
}

void delete_pos(int pos)
{
    struct node *ptr;
    ptr=start;
    for(int i=1;i<pos;i++)
    {
        ptr=ptr->next;
    }
    ptr->prev->next=ptr->next;
    ptr->next->prev=ptr->prev;
    free(ptr);
}

void display()
{
    struct node *ptr;
    ptr=start;
    while(ptr!=NULL)
    {
        printf("\t%d",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

int main()
{
    int option,num,data;
    while(1)
    {
    printf("Please choose an option\n9.Create DLL\n1.Insert_beg\n2.Insert_end\n3.Insert_spePos\n4.Delete_beg\n5.Delete_end\n6.Delete_specificPos\n7.Display\n8.Exit\n");
    scanf("%d",&option);
    switch (option)
    {
    case 1:
        printf("Enter the number to be inserted\n");
        scanf("%d",&num);
        insert_beg(num);
        break;
    
    case 2:
        printf("Enter the number to be inserted\n");
        scanf("%d",&num);
        insert_end(num);
        break;
    
    case 3:
        printf("Insert at which position\n");
        scanf("%d",&data);
        printf("Enter the number to be inserted\n");
        scanf("%d",&num);
        insert_spePos(data,num);
        break;

    case 4:
        delete_beg();
        break;
    
    case 5:
        delete_end();
        break;

    case 6:
        printf("Enter the position at which elment has to be deleted\n");
        scanf("%d",&data);
        delete_pos(data);
        break;   
    
    case 7:
        display();
        break;

    case 8:
        exit(0);
        break;

    case 9:
        createLL();
        break;

    default:
        printf("Please enter a valid input\n");
        break;
    }
    }
   
    return 0;
}