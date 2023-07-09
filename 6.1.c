#include<stdio.h>
void sortin(int [], int);
void main()
{
    int i, size, a1[50];
    printf("Enter the size of array : ");
    scanf("%d",&size);
    for( i=0; i<size; i++)
    {
        printf("Enter element %d of array 1 ",i+1);
        scanf("%d", &a1[i]);
        
    }
    sortin(a1, size);
    printf("The sorted array is : ");
    for(i=0; i<size; i++)
    {
        printf(" %d ", a1[i]);
        
    }
    
}
void sortin( int a1[50], int size)
{
    int a2[50], j, i;
    for( i=0; i<size; i++)
    {
        a2[i] = a1[i];
        
    }
    for( i=0; i<size; i++)
    {
        a1[i]= a2[i];
        for(int j=0; j<size; j++)
        {
            if(a2[j] < a1[i])
                a1[i]=a2[j];

        }
        
    }
}
