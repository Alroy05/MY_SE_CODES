#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
 int info;
 struct node *prev;
 struct node * next;
};
struct node * start=NULL;
struct node * first=NULL;

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

void count()
{
int count=0;
struct node *p;
p=start;
while(p!=NULL)
{
 count=count+1;
 p=p->next;
}
printf("\nno of nodes is %d",count);
}

void copy()
{
 struct node *p,*q,*temp;
 p=start;
 while(p!=NULL)
 {  if(first==NULL)
  {
   temp=(struct node*)malloc(sizeof(struct node));
   temp->info=p->info;
   temp->next=NULL;
   first=temp;
   q=temp;
  }
  else
  { q->next=(struct node*)malloc(sizeof(struct node));
  q=q->next;
  q->info=p->info;
  q->next=NULL;
 }
 p=p->next;
}
}

void concatenate()
{
 struct node *p;
 p=start;
 while(p->next!=NULL)
 {
  p=p->next;
 }
 p->next=first;
}

void display1()
{
 struct node *p;
 p=start;
 if(p==NULL)
 printf("\nempty");
 else
 {
  while(p!=NULL)
  {
   printf("\n%d",p->info);
   p=p->next;
  } }}

void display2()
{ struct node *p;
 p=first;
 if(p==NULL)
 printf("\nempty");
 else
 {   
  while(p!=NULL)
  { 
    printf("\n%d",p->info);
    p=p->next;
  }
 }
}


struct node * tail=NULL;
struct node * f=NULL;
struct node * temp=NULL;

void reverse()
{
 struct node *p,*temp,*q;
 p=tail;
 while(p!=NULL)
 {
  if(f==NULL)
  {
   temp=(struct node*)malloc(sizeof(struct node));
   temp->info=p->info;
   temp->next=NULL;
   temp->prev=NULL;
   f=temp;
   q=temp;
  }
  else
  {
   q->next=(struct node *)malloc(sizeof(struct node));
   q=q->next;
   q->info=p->info;
   q->next=NULL;
   q->prev=temp;
   temp=temp->next;
  }
 p=p->prev;
 }
}

void split(int key)
{
 struct node *p,*q,*s;
 p=start;
 while(p->info!=key)
 {
  q=p;
  p=p->next;
 }
 q->next=NULL;
 first=p;
}

void main()
{
 int ch,item;
 printf("\nMENU OPTIONS\n1.insertion at begin\n2.count\n3.copy\n4.concatenate\n5.display first linked list\n6.display second linked list\n7.reverse\n8.split\n9.Exit\n");
 do
 {
  printf("\nenter the choice");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:printf("\nenter the element");
                  scanf("%d",&item);
                  insertbegin(item);
                  break;
   case 2:count();
                  break;
   case 3:copy();
                  printf("\nfirst linked list is copied into second linked list");
                  break;
   case 4:concatenate();
                  printf("\nsecond linked list is joined at the end of first linked list");
                  break;
   case 5:display1();
                  break;
   case 6:display2();
                  break;
   case 7:reverse();
           printf("\nreverse of original linked list is done");
                  break;
   case 8:printf("\nenter the element from where you want to split linked list");
                  scanf("%d",&item);
                  split(item);
                  break;
   case 9:exit(0);
   default:printf("\ninvalid choice...");
  } }while(ch!=7);
 getch();
}