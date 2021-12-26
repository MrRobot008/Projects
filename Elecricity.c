#include <stdio.h>
void main()
{
float unit, charge;
printf("Enter unit Consumed:");
scanf("%f",&unit);
if(unit<125)
charge=100;
else if(unit<=200)
charge=unit*.80;
else if(unit<=300)
charge=(unit-200)*0.90+160;
else

if(unit>300)

charge=(unit-300)*1+250;

if(charge>=400)

charge+=charge*0.15;

printf("Charge: %5.2f",charge);
}