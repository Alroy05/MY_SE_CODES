#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left,*right;
};

struct node *create()
{
    int data;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data\nenter -1 to exit\n");
    scanf("%d",&data);
    if(data==-1)
      return 0;
    newnode->data=data;
    printf("Enter the left child\n");
    newnode->left=create();
    printf("Enter the right child\n");
    newnode->right=create();
    return newnode;    
}

struct node *search(struct node *tree,int val)
{
    if(tree==NULL)
    {
        printf("DATA NOT FOUND");
        return tree;
    } 
    else if(tree->data == val)
    {
        printf("Data found\n");
        return tree;
    }
    else if(tree->data > val)
    {
        return search(tree->left,val);
    }
    else if(tree->data < val)
    {
        return search(tree->right,val);
    }
}

struct node *findMin(struct node *root)
{
    if(root==NULL || root->left == NULL)
    {
        return root;
    }
    else
    {
        return findMin(root->left);
    }   
}

struct node *delete(struct node *root,int val)
{
    if(root==NULL)
      return root;
    else if(root->data<val)
      root->left=delete(root->left,val);
    else if(root->data>val)
      root->right=delete(root->right,val);
    else
    {
        if(root->right==NULL && root->left ==NULL)
        {
            free(root);
            root=NULL;
            return root;
        }
        else if(root->right==NULL)
        {
            struct node *temp;
            temp=root;
            root=root->left;
            free(temp);
            return root;
        }
        else if(root->left==NULL)
        {
            struct node *temp;
            temp=root;
            root=root->right;
            free(temp);
            return root;
        }
        else
        {
            struct node *temp;
            temp=findMin(root->right);
            root->data=temp->data;
            root->right=delete(root->right,temp->data);
            return root;
        }
    }
}

void display(struct node *tree)
{
    if(tree!=NULL)
    {
        display(tree->left);
        printf("%d\t",tree->data);
        display(tree->right);
    }
}

int main()
{
    struct node *root;
    root=create();
    int option,data;
    while(1)
    {
    printf("Please choose an option\n1.Search\n2.Delete\n3.Create_Queue\n5.Display\n6.Exit\n");
    scanf("%d",&option);
    switch (option)
    {
    case 1:
        printf("Enter the element to be searched");
        scanf("%d",&data);
        search(root,data);
        break;

    case 2:
        printf("Enter the element to be deleted");
        scanf("%d",&data);
        delete(root,data);
        break;
    
    // case 3:
    //     create_Cqueue();
    //     break;
    
    case 5:
        display(root);
        break;

    case 6:
        exit(0);
        break;
    

    default:
        printf("Please enter a valid input\n");
        break;
    }
    }
   
    return 0;

}