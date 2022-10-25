#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next; 
};
struct node *start = NULL;

void traverse()
{   
    struct node *ptr;
    ptr = start;
    if(ptr==NULL)
    {
        printf("The linked list is empty\n");
    }
    else
    {
        while(ptr!=NULL)
        {
        printf("%d",ptr->data);
        ptr = ptr->next;
        }
        printf("\n");
    }
}

void insert_beg(int val)
{
    struct node *new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    new_node->next=start;
    start= new_node;  
}

void insert_end(int val)
{
    struct node *new_node,*ptr;
    ptr = start;
    while(ptr->next != NULL)
    {
      ptr=ptr->next;
    }
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    new_node->next=NULL;
    ptr->next=new_node;
}

void insert_after(int count,int val)
{
    struct node *new_node,*ptr,*preptr;
    ptr=start;
    preptr=ptr;
    while(preptr->data!=count)
    {
       preptr=ptr;
       ptr=ptr->next;
    }
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    new_node->next=ptr;
    preptr->next=new_node;
}

void delete_beg()
{
    if(start==NULL)
    {
        printf("The Linked list is empty\n");
    }
    else
    {
      struct node *ptr;
      ptr=start;
      start=ptr->next;
      free(ptr);
    }
}

void delete_end()
{
    struct node *ptr,*preptr;
    ptr=start;
    while(ptr->next != NULL)
    {
      preptr=ptr;
      ptr=ptr->next;
    }
    preptr->next=NULL;
    free(ptr);
}

void delete_pos(int count)
{
    struct node *ptr,*preptr;
    ptr=start;
    for(int i =1;i<count;i++)
    {
      preptr=ptr;
      ptr=ptr->next;
    }
    preptr->next=ptr->next;
    free(ptr);
}

int main()
{
    int option,num,data;
    while(1)
    {
    printf("Please choose an option\n1.Insert_beg\n2.Insert_end\n3.Insert_after\n4.Delete_beg\n5.Delete_end\n6.Delete_specificPos\n7.Traverse\n8.Exit\n");
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
        printf("Insert after which element?\n");
        scanf("%d",&data);
        printf("Enter the number to be inserted\n");
        scanf("%d",&num);
        insert_after(data,num);
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
        traverse();
        break;

    case 8:
        exit(0);
        break;

    default:
        printf("Please enter a valid input\n");
        break;
    }
    }
   
    return 0;
}