#include<stdio.h>
struct Employee
{
    int id;
    char name [30];
    int salary;
};
int main()
{
    struct Employee e;
    printf("Enter the name of employee\n");
    gets(e.name);

    printf("Enter the name of id \n");
    scanf("%d",&e.id);

    printf("Enter the salary \n");
    scanf("%d",&e.salary);
    return 0;
}
