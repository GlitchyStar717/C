#include<stdio.h>
#include<conio.h>
void main()
{
	int m,n,i,j;
	clrscr();
	printf("Enter the value of m and n : ");
	scanf("%d%d",&m,&n);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
			printf("%d x %d = %d\n",i,j,(i*j));
		printf("\n");
	}
	getch();
}