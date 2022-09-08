#include<stdio.h>
struct Employee
{
    int id;
    char name [30];
    int salary;
};
int main()
{
    int n,high;
    printf("Enter the no. of employee : ");
    scanf("%d",&n);
    struct Employee e[50];
    int i;

    for(int i=0; i <n;i++)
    {
        printf("Enter the name of employee \n");
        fflush(stdin);
        fgets(e[i].name,30,stdin);

        printf("Enter the id \n");
        scanf("%d",&e[i].id);

        printf("Enter the salary \n");
        scanf("%d",&e[i].salary);
    }
    printf("---------------------------------------------------------------------------------------------------------\n");
    high=e[0].salary;
    for(i=0;i<n;i++)
    {
        if(e[i].salary>high)
            high=e[i].salary;
    }
    printf("Highest salary Employee details are : \n");
    for(i=0;i<n;i++)
    {
        if(e[i].salary==high)
            printf("Name = %s, ID =%d,  Salary =%d",e[i].name,e[i].id,e[i].salary);
    }
    return 0;
}
