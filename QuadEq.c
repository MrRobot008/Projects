#include<stdio.h>   
#include<math.h>    
int main()
{
float a, b, c, disc; // Declaration of variables
float root1,root2,real,imag;
// Reading Co-efficient of Quadratic Equation
printf("Enter a, b and c values\n");
scanf("%f%4f%f",&a,&b,&c);
if( (a == 0) && (b == 0) )
{
printf("Invalid coefficients\n");
printf (" Try Again with valid inputs!!!!\n");
}
else if(a == 0) // Linear equation and its root
{
printf("Linear equation\n");
root1 = -c / b;
printf("Root=%.3f", root1);
}
else // Quadratic Equation
{
// b2 - 4ac is known as discriminant

disc = b*b - 4*a*c;
if(disc == 0) // Real & equal roots
{
printf("The roots are real and equal\n");
root1 = root2 = -b/(2*a);
printf("Root1=%.3f\n Root2 = %.3f", root1, root2);
}
else if(disc>0) // Real & distinct roots
{
printf("The roots are Real and Distinct\n");
root1 = (-b + sqrt(disc)) / (2*a);
root2 = (-b - sqrt(disc)) / (2*a);
printf("Root1=%.3f\nRoot2 = %.3f",root1,root2);
}
else //Imaginary roots
{
printf("The roots are Real and Imaginary\n");
real = -b / (2*a);
//fabs() returns only number ignoring sign
imag = sqrt(fabs(disc))/(2*a);
printf("Root1=%.3f + i %.3f \n",real, imag);
printf("Root2 = %.3f - i %.3f",real,imag);
}
}
return 0;
}