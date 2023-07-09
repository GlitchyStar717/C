#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,i,j,count,temp,reverse;
	clrscr();
	printf("Enter two numbers n1 and n2 : ");
	scanf("%d%d",&n1,&n2);
	for (i=n1;i<=n2;i++)
	{
		temp=i;
		count = 0;
		reverse = 0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
				count++;
		}
		if(count==2)
			printf("%d is prime number.\n",i);
		while(temp!=0)
		{
			reverse=reverse*10+(temp%10);
			temp/=10;
		}
		if(reverse==i)
			printf("%d is a palindrome.\n",i);
	}
	getch();
}