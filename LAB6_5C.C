#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,n,t;
	clrscr();
	printf("Enter the no of terms : ");
	scanf("%d",&n);
	for (i=1;i<=(n-1);i++)
	{
		t=1+pow((i-1),2);
		printf("%d, ",t);
	}
	printf("%d",(1+(n-1)*(2*i+1)));
	getch();
}
