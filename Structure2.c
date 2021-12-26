    #include <stdio.h>
    #include <ctype.h>
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
        struct student st2;
        printf("Enter details of the student\n");
        scanf("%s",&st2.name);
        scanf("%d",&st2.age);
        scanf("%f",&st2.marks);
        scanf("%s",&st2.subname);


        printf("Details of student are\n");
        printf("Name of student is :%s\n",st2.name);
        printf("Age of Student: %d\n",st2.age);
        printf("Marks of Student: %f\n",st2.marks);
        printf("Subname of Student: %s\n",st2.subname);
    }

