//Record of student who is also a person
#include<stdio.h>
struct person
{
	char name[50];
	int age;
};
struct student
{
	char section;
	int roll;
    struct person P;
};
void main()
{
    struct student S[2];
    for(int i=0; i<2; i++)
    {
        printf("Enter Name : ");
	    scanf("%s",S[i].P.name);
	
        printf("Enter Age : ");
	    scanf("%d",&S[i].P.age);
	
	    printf("Enter Section : ");
	    scanf(" %c",&S[i].section);
	
    	printf("Enter Roll Number : ");
	    scanf("%d",&S[i].roll);
	   
    }

    printf ("The record of the student 1 is : \n");
	printf ("Name = %s\n Age = %d\n Section = %c\n Roll No = %d\n",S[0].P.name,S[0].P.age,S[0].section,S[0].roll);
	
    printf ("The record of the student 2 is : \n");
	printf ("Name = %s\n Age = %d\n Section = %c\n Roll No = %d",S[1].P.name,S[1].P.age,S[1].section,S[1].roll);
	
}