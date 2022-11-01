#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL;

void create_CLL()
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
            new_node->next=new_node;
            start=new_node;
        }
        else
        {
            ptr=start;
            while(ptr->next!=start)
            {
                ptr=ptr->next;
            }
            ptr->next=new_node;
            new_node->next=start;
        }
        printf("Enter data or -1 to exit\n");
        scanf("%d",&num);
    }
}

void insert_beg(int val)
{
    struct node *new_node,*ptr;
    ptr=start;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    new_node->next=start;
    while(ptr->next!=start)
    {
        ptr=ptr->next;
    }
    ptr->next=new_node;
    start=new_node;
}

void insert_end(int val)
{
    struct node *new_node,*ptr;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    ptr=start;
    while(ptr->next!=start)
    {
        ptr=ptr->next;
    }
    new_node->next=start;
    ptr->next=new_node;
}

void insert_spePos(int count,int val)
{
    struct node *ptr,*preptr,*new_node;
    int i;
    ptr=start;
    preptr=ptr;
    for(i=1;i<count;i++)
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
    struct node *ptr,*preptr;
    ptr=start;
    preptr=start;
    while(ptr->next!=start)
    {
        ptr=ptr->next;
    }
    start=preptr->next;
    ptr->next=start;
    free(preptr);
}

void delete_end()
{
    struct node *ptr,*preptr;
    ptr=start;
    preptr=ptr;
    while(ptr->next!=start)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=start;
    free(ptr);
}

void delete_pos(int count)
{
    struct node *ptr,*preptr;
    ptr=start;
    preptr=ptr;
    while(count!=1)
    {
        preptr=ptr;
        ptr=ptr->next;
        count--;
    }
    preptr->next=ptr->next;
    free(ptr);
}

void display()
{
    struct node *ptr;
    ptr=start;
    while(ptr->next!=start)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    printf("%d\n",ptr->data);
}

int main()
{
    int option,num,data;
    while(1)
    {
    printf("Please choose an option\n9.Create_CLL\n1.Insert_beg\n2.Insert_end\n3.Insert_spePos\n4.Delete_beg\n5.Delete_end\n6.Delete_specificPos\n7.Display\n8.Exit\n");
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
        printf("Insert at which position?\n");
        scanf("%d",&num);
        printf("Enter the number to be inserted\n");
        scanf("%d",&data);
        insert_spePos(num,data);
        break;

    case 4:
        delete_beg();
        break;
    
    case 5:
        delete_end();
        break;

    case 6:
        printf("Enter the position at which elment has to be deleted\n");
        scanf("%d",&num);
        delete_pos(num);
        break;   
    
    case 7:
        display();
        break;

    case 8:
        exit(0);
        break;
    
     case 9:
        create_CLL();
        break;

    default:
        printf("Please enter a valid input\n");
        break;
    }
    }
   
    return 0;
}
