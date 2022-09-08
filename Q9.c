#include<stdio.h>
struct Marks
{
    int roll_no;
    char name [30];
    float chem_marks, maths_marks,phy_marks;
};
int main()
{
    int n;
    printf("Enter the no. of students : ");
    scanf("%d",&n);
    printf("\n------------------------------------------------------------------------------------\n");
    struct Marks marks[1000];

    for(int i=0;i<n;i++)
    {
        printf("Student %d \n",i+1);
        printf("Enter the roll no. : \n");
        scanf("%d",&marks[i].roll_no);
        printf("Enter the name : \n");
        scanf("%s",marks[i].name);
        printf("Enter Chemistry marks : \n");
        scanf("%d",&marks[i].chem_marks);

        printf("Enter Maths marks : \n");
        scanf("%d",&marks[i].maths_marks);

        printf("Enter Physics marks : \n");
        scanf("%d",&marks[i].phy_marks);
    }
    printf("-----------------------------------------------------------------------------------\n");

        for(int i=0;i<n;i++)
        {
            printf("students %d \n",i+1);
            printf("Student = %s, Roll no. =%d,  Name =%d  , ",marks[i].name,marks[i].roll_no,marks[i].name);
        }
        return 0;
}
