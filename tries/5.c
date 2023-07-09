#include<stdio.h>
int sum(int x)
{
    int rem;
    if(x==0)
        return 0;
    else
    {   
        rem = x%10;
        return (rem+sum(x/10));
    }
}
void main()
{
    int total=0,num;

    printf("Enter a number : ");
    scanf("%d",&num);
    total = sum(num);
    printf("Sum of digits is : %d.",total);
}