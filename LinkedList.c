#include<stdio.h>
#include<string.h>
struct node
{
    int idata;
    char cdata[3];
    NODE *link;
};typedef struct node NODE;

int main()
{
    NODE *first=NULL;
    NODE *second,*third;
    int temp;
    first=get_node();
    first->idata=1;
    strcpy(first->cdata."CAT");
    first->link=NULL;
    second=get_node();
    second->idata=11;
    strcpy(first->cdata."BAT");
    first->link=second;
    second->link=NULL;
    printf("The nodes are\n");
    for(temp=first;temp!=NULL;temp=temp->link)
    {
        printf("%d%s",temp->idata,temp->cdata);
    }
}

NODE * get_node()
{
    NODE * temp;
    temp=(NODE*)malloc(sizeof(NODE));
    if(temp==NULL)
    {
        printf("No mem available\n");
    }
    exit(0);
    return temp;
}