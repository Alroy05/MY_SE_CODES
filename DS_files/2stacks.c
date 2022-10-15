#include<stdio.h>
#include<stdlib.h>

struct stack
{
  int stack1[10];
  int top;
};

void Push(struct stack *ptr)
{   
    if(ptr->top==9)
    {
        printf("Overflow\n");
    }
    else
    {
    int val;
    printf("Enter the element to be pushed\n");
    scanf("%d",&val);
    ptr->top++;
    ptr->stack1[ptr->top]=val;
    printf("Pushed element is %d\n",ptr->stack1[ptr->top]);
    return;
    }
}

void Pop(struct stack *s)
{
    if(s->top==-1)
    {
        printf("Underflow\n");
    }
    else
    {
        int x = s->stack1[s->top];
        s->top--;
        printf("Poped element is %d\n",x);
    }
}

void Display(struct stack *s)
{
    for(int i=s->top;i>=0;i--)
    {
        printf("%d\n",s->stack1[i]);
    }

}

void Top(struct stack *s)
{
    printf("The top element is %d\n",s->stack1[s->top]);

}


int main()
{
    struct stack s;
    s.stack1;
    s.top=-1;
    int ch;
    
    
    while(1)
    {
    printf("1.Push\n2.Pop\n3.Display\n4.Top\n5.Exit\n");
    printf("Choose an option\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        Push(&s);
        break;

        case 2:
        Pop(&s);
        break;

        case 3:
        Display(&s);
        break;
        
        case 4:
        Top(&s);
        break;

        case 5:
        exit(0);
    }
    }
}