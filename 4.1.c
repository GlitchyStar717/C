#include<stdio.h>
void main()
{
    int size, a1[50],a2[50],a3[50];
    printf("Enter the size of array : ");
    scanf("%d",&size);
    for(int i=0; i<size; i++)
    {
        printf("Enter element %d of array 1\n",i+1);
        scanf("%d",&a1[i]);
        
        printf("Enter element %d of array 2\n",i+1);
        scanf("%d",&a2[i]);
        
    }
    printf("The New Array is : \n");
    for(int i=0; i<size; i++)
    {
        a3[i]=a1[i]+a2[i];
        printf("%d , ",a3[i]);

    }
}

    