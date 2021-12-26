#include<stdio.h>  
void insert_ele(int *n,int arr[]);
void delete_ele(int *n,int arr[]);
void traverse_arr(int n,int arr[]);
void read_arr(int n,int arr[]);

#define size 25
int main()
{
    int arr[size],n,choice,i;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    read_arr(int n,int arr)
    for(;;)
    {
        printf("Press 1:To insert an element,Press 2:To delete an element,Press 3: To traverse the array,Press 4: Exit\n");
        scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        insert_ele(&n,arr);
        break;
    case 2:
        delete_ele(&n,arr);
        break;

    case 3:
        traverse_arr(n,arr);
        break;
    case 4:
        exit(0);

    default:
        printf("Enter b/w 1-4");
        break;
    }

    }
}

void Read_Arr(int n,int arr[])
{
    int i;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    return;
}
void insert_ele(int *n,int arr[])
{
    int pos,*n,i,new_ele;
    printf("Enter the posistion\n");
    scanf("%d",&pos);
    if(pos>=1 && pos<=(n+1))
    {
        printf("Enter the new element");
        scanf("%d",new_ele);
    }
    for(i=(*n-1);i>pos-1;i--)
    {
        arr[i+1]=arr[i];

    }
    arr[pos-1]=new_ele;
    *n=*n-1;

}
void delete_ele(int *n,int arr[])
{
    int i,j,pos;
    printf("Enter the posistion\n");
    scanf("%d,&pos");
    if((pos>=1) && (pos<=n))
    {
        for(i=0;i<pos-1;i++)
        continue;
    }
}
{
    for(j=i;j<=(*n-1);j++)
    arr[j-1]=arr[i];
    *n=*n-1;
}
void traverse_arr(int n,int arr[])
{
    int n,int arr,int i; 
    printf("The array elements are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
}
}