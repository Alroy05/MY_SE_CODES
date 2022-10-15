#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

typedef struct{
  int a[SIZE];
  int top;
}stack;

void push(stack *s,int elc)
{
    if(s->top==SIZE-1)
    printf("Stack Overflow\n");
    else
    {
        s->top++;
        s->a[s->top]=elc;
    }
}

int pop(stack *s){
    if(s->top==-1)
    printf("Stack Underflow \n");
    else{
        int x = s->a[s->top];
        s->top--;
        return x;
    }
}

int stack_top(stack *s)
{
    if(s->top==-1){
        printf("Empty stack\n");
    }
    else
    {
        return(s->a[s->top]);
    }
}

void display(stack *s)
 { 
   int i;
   for(i =s->top;i>=0;i--)
    {
      printf("%d \n",s->a[i]);
    }
 }

int main()
 {
    stack s;
    s.top=-1;
    int ch,elc;
    while(1)
    {
    printf("Choose an option\n");
    printf("1.Push\n2.Pop\n3.Stack_top\n4.Display\n5.Exit\n");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1: //push
          printf("Enter value to be pushed \n");
          scanf("%d",&elc);
          push(&s,elc);
          break;
        case 2://pop
          printf("Poped element is %d \n",pop(&s));
          break;
        case 3: //Displays the top most element in a stack
          printf("The Top most element of the stack is %d \n",stack_top(&s));
          break;
        case 4: //Displays the stack
          printf("Values of the stack are \n");
          display(&s); 
          break;
        case 5: //Exit
          exit(0);
        default:
          printf("\nInvalid choice entered");
          break;
    }
    }
}