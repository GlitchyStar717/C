#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,x,n,sum=0,length=0,count1=0,count2=0,count3=0;
	clrscr();
	printf("Enter a number : ");
	scanf("%d",&x);
	n=x;
	for (i=1;i<=x+2;i++)
	{
		if(x%i==0)
			count1++;
		if((x+2)%i==0)
			count2++;
		if((x-2)%i==0)
			count3++;
		sum+=i;
		if(x==sum)
			printf("%d is trianglar number.\n",x);
	}
	 if (count1==2)
	 {
		printf("%d is a prime number.\n",x);
		if (count2==2 || count3==2)
			printf("%d is also a twin prime number.\n",x);
	 }
	 while(n!=0)
	 {
		length+=1;
		n/=10;
	 }
	 n=x;
	 sum=0;
	 for(i=1;i<=length;i++)
	 {
		sum+=pow((n%10),length);
		n/=10;
	 }
	 if(sum==x)
		printf("%d is armstrong number.\n",x);
	 getch();
}