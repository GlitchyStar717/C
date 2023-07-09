//Record of 6 subjects of a Student using structure. The record should also maintain name and roll no of student. Your program should also calculate the percentage of 6 subjects. Assume 100 is the full marks.
#include<stdio.h>
struct student
{
	char name[50];
	int roll;
	float marks[6];
}S;
void main()
{
	float marks, percentage,sum=0;
	int i;
	printf("Enter Name : ");
	scanf("%s",S.name);
	printf("Enter Roll Number : ");
	scanf("%d",&S.roll);
	for(i=0;i<6;i++)
	{
		printf("Enter marks of subject %d ",i+1);
		scanf("%f",&S.marks[i]);
		sum+=S.marks[i];
	}
	percentage = (sum/6.0);
	printf ("The record of the student is : \n");
	printf ("Name = %s\n Roll No = %d\n Percentage = %f",S.name,S.roll,percentage);
	printf ("Percentage = %f",percentage);
	printf ("Percentage = %f",percentage);
}