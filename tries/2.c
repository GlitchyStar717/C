#include<stdio.h>
void main()
{
    int a[5]={8,2,9,9,1}, *p, i, *q;
    p=&a[0];
    q=&a[0];
    for(i=0;i<5;i++)
    {
        if(*p<a[i])
        {
            p=&a[i];
        }
        if(a[i]>*q && a[i]!=*p)
            q=&a[i];
    }
    printf("Second Largest element is : %d", *q);
}