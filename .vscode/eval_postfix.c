#include <stdio.h>
# define SIZE 100

int eval_post(char postfix[SIZE]);
void push(int token,int *top,int stack[]);
int pop(int *top,int sstack[]);
int compute(int op1,int op2,int symbol);

int main()
{
    char postfix[SIZE];
    printf("Enter a Valid postfix exp\n");
    scanf("%s",postfix);    
    printf("The evaluated postfix expression is %d\n",eval_post(postfix));
    return 0;
}
int eval_post(char postfix[])
{
    int i=0,top=-1,stack[SIZE],token,op1,op2,result;
    char symbol;
    while(postfix[i]!= '\0')
    {
        symbol=postfix[i];
        if(isdigit(symbol))
        {
            token=symbol-'0';
            push(token,&top,stack);

        }
        else
        {
            op2=pop(&top,stack);
            op1=pop(&top,stack);
            result=compute(op1,op2,symbol);
            push(result,&top,stack);
        }
    }i=i+1;
    return(pop(&top,stack));
}
void push(int tn,int *top,int stack[])
{
    (*top)++;
    stack[(*top)]=tn;
    return;
}
int pop(int *top,int stack[])
{
    return(stack[(*top)--]);
}
int compute(int op1,int op2,int symbol)
{
    switch(symbol)
    {
        case '+': return(op1+op2);
        break;

        case '-': return(op1-op2);
                  break;

        case '*': return(op1*op2);
                  break;
        case '/': return(op2/op1);
                  break;
    }
}