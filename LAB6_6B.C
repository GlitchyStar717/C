#include<stdio.h>
#include<conio.h>
#include<math.h>
int fact (int);
void main()
{
	int i,n;
	float sum=0,term;
	clrscr();
	printf("Enter the no of terms : ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		term = pow((-1),(i+1))/fact(i-1);
		sum+=term;
	}
	printf("The sum of the function e^-1 evaluated to n terms is : %f.",sum);
	getch();
}

int fact (int x)
{
	int j,factorial=1;
	for (j=1;j<=x;j++)
	       factorial*=j;
	return factorial;
}