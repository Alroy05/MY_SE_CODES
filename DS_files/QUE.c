#include<stdio.h>
#include<stdlib.h>
struct Node
{
 char name[50];
 int roll_no;
 float percentage;
 struct Node *next;
};
struct Node* Create_Nodes_in_Singly_Linked_List (struct Node* head,int n)
{
 struct Node *newnode;
 struct Node *temp;
 for (int i = 0; i < n; i++)
 {
 newnode = (struct Node *) malloc(sizeof(struct Node));
 printf ("Enter name : ");
 scanf ("%s",newnode->name);
 
 printf ("Enter Roll number : ");
 scanf ("%d",&newnode->roll_no);
 
 printf ("Enter Percentage : ");
 scanf ("%f",&newnode->percentage);
 
 newnode -> next = NULL;
 if (head == NULL)
{
 head = newnode;
 temp = newnode;
}
 else
{
 temp -> next = newnode;
 temp = newnode;
}
 }
 
 return head;
}
void Transversal_of_singly_linked_list(struct Node* head)
{
 if(head==NULL)
 {
 printf("Linked list is Empty\n");
 }
 
 else
 {
 while(head!=NULL)
 {
 printf("Name : %s\n",head->name);
 printf("Roll number : %d\n",head->roll_no);
 printf("Percentage : %f\n",head->percentage);
 head = head ->next;
 }
 
 printf("\n");
 }
 
}
int main ()
{
 struct Node *head = NULL; 
 
 int option, n;
 printf("1. Create nodes in Singly Linked List\n2. View all records\n3. Exit\n");
 printf("Enter Option : ");
 scanf("%d", &option);
 while (1)
 {
 switch (option)
 {
 case 1:
 printf("Enter number of nodes : ");
 scanf("%d", &n);
 head = Create_Nodes_in_Singly_Linked_List(head,n);
 break;
 case 2:
 Transversal_of_singly_linked_list(head);
 break;
 case 3:
 exit(0);
 }
 printf("1. Create nodes in Singly Linked List\n2. View all records\n3. Exit\n");
 printf("Enter Option : ");
 scanf("%d", &option);
 }
 return 0;
}