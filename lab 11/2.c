#include<stdio.h>
#define max 3
struct employee
{
    char name[20];
    char phone[7];
    int salary; 
};
void main()
{
    int i,j,average=0;
    struct employee e[max];
    for (i=0;i<max;i++)
    {
        printf("Enter name: ");
        scanf("%s",e[i].name);
        printf("Enter phone: ");
        scanf("%s",e[i].phone);
        printf("Enter salary: ");
        scanf("%d",&e[i].salary);
    }
    struct employee temp;
    for(i=0;i<3;i++)
    {
        for (j=(i+1);j<max;j++)
        {
            if(e[i].salary>e[j].salary)
            {
                temp=e[i];
                e[i]=e[j];
                e[j]=temp;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        average += (float)e[i].salary/max;
    }
    printf("\nThe name is %s. Phone is %s and highest salary is %d.",e[max-1].name,e[max-1].phone,e[max-1].salary);
    printf("\nThe name is %s. Phone is %s and lowest salary is %d.",e[0].name,e[0].phone,e[0].salary);
    printf("\n\nThe average salary is : %d",average);
}