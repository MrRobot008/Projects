#include <stdio.h>

int main(){

int num=52;
int *p;
int **p2;

p = &num;
p2 = &p;


printf("The address of num is %x\n",&num);
printf("The value at above address is %x ",*p);
}
