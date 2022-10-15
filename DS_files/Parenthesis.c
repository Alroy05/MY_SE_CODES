#include<stdio.h>
#include<string.h>
#define MAX 10

typedef struct
{
    char stk[MAX];
    int top;
}stack;

void push(stack *s,char c)
{
    s->top++;
    s->stk[s->top]=c;
}

char pop(stack *s)
{
   return (s->stk[s->top--]);
}

int main()
{
    stack s;
    s.top=-1;
    s.stk;
    int i,flag=1;
    char exp[MAX],temp;

    printf("Enter an expression\n");
    scanf("%s",exp);

    for(i=0;i<strlen(exp);i++)
    {
        if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
           push(&s,exp[i]);
        else
        if(exp[i]==')'||exp[i]=='}'||exp[i]==']')
            if(s.top==-1)
             flag=0;
            else
            temp=pop(&s);
            if(exp[i]==')' && (temp=='{' || temp=='['))
              flag=0;
            if(exp[i]=='}' && (temp=='(' || temp=='['))
              flag=0;
            if(exp[i]==']' && (temp=='{' || temp=='('))
              flag=0;
    }

    if(s.top>=0)
      flag=0;
    if(flag==1)
    {
        printf("Valid expression");
    }
    else
    {
        printf("Invalid expression");
    }

  return 0;
}