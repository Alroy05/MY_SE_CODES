#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next; 
};

struct node *insert_beg(int val,struct node *start)
{
    struct node *new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    new_node->next=start;
    start= new_node;
    return start;  
}

struct node *split(int term,struct node *start,struct node *start2)
{
    struct node *ptr,*preptr;
    ptr = start;
    preptr=ptr;
    for(int i =1;i<term;i++)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    start2=ptr;
    preptr->next=NULL;
    printf("LL split successfully\n");
    return start2;
}

void traverse(struct node *start)
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

struct node *concat(struct node *head1,struct node *head2)
{
    struct node *ptr;
    ptr=head1;
    while(ptr->next!=NULL)
    {
      ptr=ptr->next;
    }
    ptr->next=head2;
    return head1;
}

struct node *reverse(struct node *head)
{
    struct node *prev,*current,*nNode;
    nNode=head;
    current=head;
    prev=NULL;
    
    while(nNode!=NULL)
    {
       nNode=nNode->next;
       current->next=prev;
       prev=current;
       current=nNode;
    }
    head=prev;
    return head;
}

int count(struct node *start)
{   
    struct node *ptr;
    ptr = start;
    int counter=0;
    if(ptr==NULL)
    {
        printf("The linked list is empty\n");
    }
    else
    {
        while(ptr!=NULL)
        {
        ptr = ptr->next;
        counter++;
        }
        printf("\n");
    }
    return counter;
}

int main()
{
    int option,num,data;
    struct node *start = NULL;
    struct node *start2 = NULL;
    while(1)
    {
    printf("Please choose an option\n1.Insert\n2.Display 1st LL\n3.Display 2nd LL\n4.Split\n5.Concate\n6.Reverse\n7.Count Nodes\n8.Exit\n");
    scanf("%d",&option);
    switch (option)
    {
    case 1:
        printf("Enter the number to be inserted\n");
        scanf("%d",&num);
        start=insert_beg(num,start);
        break;
    
    case 2:
        traverse(start);
        break;
    
    case 3:
        traverse(start2);
        break;

    case 4:
        printf("Enter the term number from which LL to be concatenated\n");
        scanf("%d",&num);
        start2=split(num,start,start2);
        break;
    
    case 5:
        start=concat(start,start2);
        printf("LL concatenated!\n");
        break;

    case 6:
        start=reverse(start);
        break;

    case 7:
        printf("The number of nodes are %d\n",count(start));
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