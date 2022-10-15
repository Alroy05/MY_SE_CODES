#include<stdio.h>
#include<stdlib.h>

struct node
{


};
struct node * start=NULL;

void insertbegin(int item)
{
 struct node *p;
 p=(struct node *)malloc(sizeof(struct node));
 p->info=item;
 if(start==NULL)
 {
  p->next=NULL;
  start=p;
 }
 else
 {
  p->next=start;
  start=p;
 }
 }

int count_nodes()
{
    int count=0;
    struct node *ptr;
    ptr=start;
    //printf("\nEntered elements are: ");
    while(ptr!=NULL)
    {
        //printf("%d->",ptr->data);
        count++;
        ptr=ptr->next;
    }
    return count;
}

void Reverse()
{
    struct node *p,*q,*r;  // p prevnode q currentnode r nextnode
    p = NULL;
    r = q = start;
    while(r!=0)
    {
        r = r->next;
        q->next = p;
        p = q;
        q = r;
    }
    start = p;  
}

void concat(struct node *Start1 ,struct node *Start2)
{
    struct node *ptr=NULL;
    ptr= Start1;
    while(ptr->next!=NULL)
    {
        ptr = ptr->next;
    }
    ptr->next=Start2;
}

struct node*copy(struct node* Start)
{
    struct node*Start1;
    struct node*newnode;
    head1=(struct node*)malloc(sizeof(struct node));
    temp=Start;
    Start1->data=temp->data;
    newnode=Start1;
    while(temp!=NULL)
    {
        newnode->data=temp->data;
        newnode->next=(struct node*)malloc(sizeof(struct node));
        temp=temp->next;
        newnode=newmode->next;
    
    }
    newnode->next=NULL;
}

int main()
{

    int ch, pos,item;
    while (1)
    {
        printf("Enter your choice\n");
        printf("1.Insert begin\n2.Reverse\n3.Concat\n4.Copy\n5.Count_nodes\n6.Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the number to be inserted\n");
            scanf("%d\n",&item);
            insertbegin(item);
            break;
        case 2:
            Reverse();
            break;
        case 3:
            concat();
            break;
        case 4:
            //copy
            break;
        case 5:
            count_nodes();
            break;
        case 6:
            exit(0);
        default:
            printf("Wrong choice\n");
        } 
    }
}