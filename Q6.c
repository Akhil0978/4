#include<stdio.h>
struct Employee
{
    int id;
    char name [30];
    int salary;
};
int main()
{
    struct Employee e[5],temp;
    int i,j;

    for(int i=0; i <3;i++)
    {
        printf("Enter the name of employee \n");
        fflush(stdin);
        fgets(e[i].name,30,stdin);

        printf("Enter the id \n");
        scanf("%d",&e[i].id);

        printf("Enter the salary \n");
        scanf("%d",&e[i].salary);
    }



    for(i=0;i<2;i++)
    {
        for(j=i;j<3;j++)
        {
            if(strcmp(e[i].name ,e[j].name) >0)
            {
                temp =e[i];
                e[i]=e[j];
                e[j]=temp;
            }
        }
    }
    for(int i=0;i <3;i++)
    {
        printf("Name = %s, ID =%d,  Salary =%d \n",e[i].name,e[i].id,e[i].salary);
    }
    return 0;
}

