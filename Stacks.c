#include <stdio.h>
# define SIZE 5

struct student
{
    int sid;
    char sname[10];
    char gender;
};
void push(int *top,struct student std_stack[],struct student new_ele);
void display(int top,struct student std_stack[]);
void pop_ele(top,struct student std_stack[]);
int main()
{
    struct student std_stack[SIZE],new_ele,pop_ele;
    int top=-1,ch;
    for(;;)
    {
        printf("Enter 1:To push details\nEnter 2:To pop details\nEnter 3:To display stack\nEnter 4:To exit");
        scanf("%d",&ch);
switch(ch)
{
    case 1: if(top==(SIZE-1))
    {
        printf("Stack Full");
        break;
    
    }
    printf("Enter the details\n");
    printf("\nEnter the ID,Name,and Gender\n");
   scanf("%d%s%c",new_ele.sid,new_ele.sname,new_ele.gender);
    push(new_ele,&top,std_stack);

    case 2:if(top==-1)
    {
        printf("Stack Empty\n");
        break;
    }
    pop_ele(top,std_stack);
    printf("The popped contents are\n");
    printf("%d%s%c",pop_ele.sid,pop_ele.sname,pop_ele.gender);
    break;

    case 3:printf("The contents of stack are\n");
           display(top,std_stack);

    case 4:exit(0);

    default:printf("\nPlease enter a correct option\n");  
}//Switch Statement
    }//For loop    
        }//Main function
void push(struct student new_ele,int *top,struct student std_stack[])
{
    (*top)++;
    std_stack[*top]=new_ele;
    return;
}
void display(int top,struct student std_stack[])
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d%s%c",std_stack->sid,std_stack->sname,std_stack->gender);
    }
    return;
}
struct student pop_ele(int *top,struct student std_stack[])
{
    struct student popped_ele;
    popped_ele=std_stack[*top];
    (*top)--;
    return popped_ele;
}


