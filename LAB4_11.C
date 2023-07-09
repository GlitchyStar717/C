#include<stdio.h>
#include<conio.h>
void main()
{
	int sum=0, x, n=0,j;
	float avg;
	char i='y';
	clrscr();
	for(j=0;j<100;j++)
	{
		printf("Enter a number : ");
		scanf("%d",&x);
		printf("\n");
		if(x>0 && x<100)
		{
			if(x%9==0 && x%6!=0)
			{
				sum+=x;
				n++;
			}
		}
	}
	while (i!='N')
	{
		printf("Enter a number : ");
		scanf("%d",&x);
		printf("\n");
		if (x>0 && x<100)
		{
			if (x%9==0 && x%6!=0)
			{
				sum+=x;
				n++;
			}
		}
		printf("Do you want to continue (Y/N)?");
		scanf(" %c", &i);
	}
	if (n!=0)
	{
		avg=sum/n;
		printf("The sum and average are : %d and %f respectively.",sum,avg);
	}
	else
	{
		printf("There are no such numbers in your input with the matching criteria");
	}
	getch();
}