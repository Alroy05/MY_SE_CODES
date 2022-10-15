#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *create_node()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d", &temp->data);
    temp->next = NULL;
    return temp;
}

struct node *insert_begin(struct node *head)
{
    struct node *newnode;
    if (head == NULL)
    {
        head = create_node();
    }
    else
    {
        newnode = create_node();
        newnode->next = head;
        head = newnode;
    }
    return head;
}
struct node *insert_at_pos(struct node *head)
{
    int pos, i = 1;
    struct node *temp, *insertnode;
    if (head == NULL)
        head = create_node();
    else
    {
        printf("Enter position to insert\n");
        scanf("%d", &pos);
        temp = head;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        insertnode = create_node();
        insertnode->next = temp->next;
        temp->next = insertnode;
    }
    return head;
}
struct node *insert_end(struct node *head)
{
    struct node *temp;
    if (head == NULL)
        head = create_node();
    else
    {
        temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = create_node();
    }
    return head;
}
struct node *delete_begin(struct node *head)
{
    struct node *temp;
    if (head == NULL)
        printf("List is empty\n");
    else
    {
        temp = head;
        head = temp->next;
        temp->next = NULL;
        free(temp);
    }
    return head;
}

struct node *delete_at_pos(struct node *head)
{
    int pos, i = 1;
    struct node *temp, *deletenode;
    if (head == NULL)
        printf("List is empty\n");
    else
    {
        printf("Enter position to detete\n");
        scanf("%d", &pos);
        temp = head;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        deletenode = temp->next;
        temp->next = deletenode->next;
        free(deletenode);
    }
    return head;
}

struct node *delete_end(struct node *head)
{
    struct node *temp, *prevnode;
    if (head == NULL)
        printf("List is empty\n");
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            prevnode = temp;
            temp = temp->next;
        }
        prevnode->next = NULL;
        free(temp);
    }
    return head;
}
void display(struct node *head)
{
    struct node *temp;
    if (head == NULL)
        printf("List is empty\n");
    else
    {
        temp = head;
        while (temp != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main()
{
    struct node *head = NULL;

    int ch, pos;
    while (1)
    {
        printf("Enter your choice\n");
        printf("1.Insert begin\n2.Insert at position\n3.Insert end\n4.Delete begin\n5.delete end\n6.Delete at position\n7.Display\n8.Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            head = insert_begin(head);
            break;
        case 2:
            head = insert_at_pos(head);
            break;
        case 3:
            head = insert_end(head);
            break;
        case 4:
            head = delete_begin(head);
            break;
        case 5:
            head = delete_end(head);
            break;
        case 6:
            head = delete_at_pos(head);
            break;
        case 7:
            display(head);
            break;
        case 8:
            exit(0);
        default:
            printf("Wrong choice\n");
        } 
    }
}