
#include <stdio.h>
#include<stdlib.h>

void main()
{
    int n=10,i;
    int *ptr = (int *)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("No memory is available");
        return;
    }
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("The elements are\n");
    for(i=0;i<n;i++)
    {
        printf("%d",(*ptr+i));
    }
}