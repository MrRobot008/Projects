#include <stdio.h>
//Below line is declaring the structure//
struct student
    {
        char name[10];
        int age;
        float marks;
        char subname;
    };
    void main()
    {
       struct student st1={"ABC",20,71.25,"DSA"};

    {
        printf("The details are\n");
        printf("Name=%s\n",st1.name);
        printf("Age=%d\n",st1.age);
        printf("Marks=%f\n",st1.marks);
        printf("Name=%s\n",st1.subname);

    }
}
