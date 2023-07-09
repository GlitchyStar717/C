#include<stdio.h>

    struct date
{
    int dd;
    int mm;
    int yy;
};
struct employee
{
    char name[10];
    int phone;
    char address[15];
    struct date dob;
    
};

void main()
{

    struct employee e[10];
    int i=0;
    char loop ;
    while (!(loop == 'n' || loop == 'N'))
    {
        printf("Enter Name : ");
        scanf("%s",e[i].name);
        printf("Enter address : ");
        scanf("%s",e[i].address);
        printf("Enter phone : ");
        scanf("%d",&e[i].phone);
        printf("Enter Date of Birth \n");
        printf("Enter Day : ");
        scanf("%d",&e[i].dob.dd);
        printf("Enter Month : ");
        scanf("%d",&e[i].dob.mm);
        printf("Enter Year : ");
        scanf("%d",&e[i].dob.yy);
        printf("Do you want to continue the loop (Y/N): ");
        scanf(" %c",&loop);
        i++;

    }
}
