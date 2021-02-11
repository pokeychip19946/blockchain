#include<stdio.h>
#include<string.h>
struct emp
{
    char emp_name[100];
    int  emp_num;
    char emp_dep[100];
    int emp_sal;
    char name[100];
    char num[100];
    char dept[100];
    char sal[100];

};

void main()
{
    int row;
    struct emp user[10];

    strcpy( user[0].name, "NAME");
    strcpy( user[0].num, " ENROLL");
    strcpy( user[0].dept, "   DEPARTMENT");
    strcpy( user[0].sal, "SALARY");


    strcpy( user[1].emp_name, "Divyam Verma");
    user[1].emp_num = 1;
    strcpy( user[1].emp_dep, "Technical");
    user[1].emp_sal = 495407;

    strcpy( user[2].emp_name, "jay Verma");
    user[2].emp_num = 2;
    strcpy( user[2].emp_dep, "Management");
    user[2].emp_sal = 180000;

    strcpy( user[3].emp_name, "Devansh Messon");
    user[3].emp_num = 3;
    strcpy( user[3].emp_dep, "Technical");
    user[3].emp_sal = 245000;

    strcpy( user[4].emp_name, "Mayank Rastogi");
    user[4].emp_num = 4;
    strcpy( user[4].emp_dep, "Finance");
    user[4].emp_sal = 205000;


     printf( "%s \t", user[0].name);
     printf( "%s \t", user[0].num);
     printf( "%s \t", user[0].dept);
     printf( "%s \t", user[0].sal);
     printf("\n");


    for(row=1; row<=4; row++)
    {
        printf( "%s \t", user[row].emp_name);
        printf( "%d \t", user[row].emp_num);
        printf( "%s \t", user[row].emp_dep);
        printf( "%d \t", user[row].emp_sal);
        printf("\n");
    }

}
