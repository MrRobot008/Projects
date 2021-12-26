#include<stdio.h>
# define SIZE 100

void swap_ele(int temp,int arr[SIZE],int i,int j,int n);

int main()
{
    int i,j,arr[SIZE],n,swap;
    printf("Enter an unsorted array\n");
    scanf("%d",&arr[j]);
    swap_ele(swap,arr,i,j,n);
    printf("The sorted array is %d",arr[j]);
}
void swap_ele(int swap,int arr[],int i,int j,int n)
{
    for(i = 0 ; i < n - 1; i++)
{
for(j = 0 ; j < n-i-1; j++)
{
if(arr[j] > arr[j+1]) 
{
swap=arr[j];
arr[j]=arr[j+1];
arr[j+1]=swap;
return;
            }   
        }
   }
}
