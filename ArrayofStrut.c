#include <stdio.h>
void main()
{
    struct student std[5];
    int n=5,i;

    printf("How many students\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Reading for %d student",i+1);
        scanf("%s%d%f%s",std[i].name,std[i].age,std[i].marks,std[i].sub_name);
    }
    printf("The details are\n");
    for(i=0;i<n;i++)
    {
        printf("Printing for %d students\n",i+1);
        printf("%s%d%f%s",std[i].name,std[i].age,std[i].marks,std[i].sub_name);
    }
    return;
}