#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    char info;
    struct node *left,*right,*next;
};
struct node *start =NULL;

void push(struct node *newnode)
{
    if(start==NULL)
    {
        start=newnode;
    }
    else
    {
        newnode->next=start;
        start=newnode;
    }
}

struct node *pop()
{
        struct node *ptr;
        ptr=start;
        start=start->next;
        return ptr;
}

void inorder(struct node *node)
{
    if(node!=NULL)
    {
        inorder(node->left);
        printf("%c",node->info);
        inorder(node->right);
    }
}

int main()
{
   struct node *newnode,*p,*q;
   char a[100];
   int i=0;
   printf("Please enter a postfix expression\n");
   gets(a);
   while(a[i]!='\0')
   {
       if(a[i]=='+' || a[i]=='-' || a[i]=='*' || a[i]=='/' || a[i]=='%')
       {
          newnode=(struct node*)malloc(sizeof(struct node));
          newnode->info=a[i];
          newnode->left=NULL;
          newnode->right=NULL;
          newnode->next=NULL;
          p=pop();
          q=pop();
          newnode->right=p;
          newnode->left=q;
          push(newnode);
        }
        else
        {
          newnode=(struct node*)malloc(sizeof(struct node));
          newnode->info=a[i];
          newnode->left=NULL;
          newnode->right=NULL;
          newnode->next=NULL;
          push(newnode);
        }
     i++;
   }
   printf("The inorder traversal is:\n");
   inorder(newnode);
}