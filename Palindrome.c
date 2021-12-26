#include<stdio.h>
int main()
{
int n,rev=0,num, remainder ;//Variables declaration
printf("Enter the number\n");
scanf("%d",&num); //Read variable num
n=num; //Preserving original value to „n‟
while(num!=0) //Reversing the number
{

remainder = num%10; //Digit Separation
num = num/10; //Eliminate the right-most digit
rev = rev*10+remainder;//Reversing the number of digits
}
//Print the value of rev

printf("The reverse number is %d",rev);
if(rev == n) //Comparing „n‟ with “rev”


printf("\n %d is a palindrome",n);
else
printf("\n %d is not a palindrome",n);
return 0;
}       