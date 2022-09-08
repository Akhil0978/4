#include<stdio.h>
struct Marks
{
    int roll_no;
    char name [30];
    float chem_marks, maths_marks,phy_marks;
};
int main()
{

    struct Marks marks[10];

    for(int i=0;i<10;i++)
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
    printf("-----------------------------------------------------------------------------------");
        for(int i=0;i<10;i++)
        {
            printf("students %d \n",i+1);
            float percentage = (marks[i].chem_marks + marks[i].maths_marks + marks[i].phy_marks) /300;
            printf("Percentage : %f % \n",percentage * 100);
            printf("Student = %s, Roll no. =%d,  Name =%d  , ",marks[i].name,marks[i].roll_no,marks[i].name);
        }
        return 0;
}
