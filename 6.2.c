#include<stdio.h>
int sum1(int [][], int);
void main()
{
    int i, j, size, a1[50][50], sum;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    for( i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            printf("Enter element [%d][%d] of array 1 ",i,j);
            scanf("%d", &a1[i][j]);
        }
        
    }
    sum = sum1(a1, size);
    printf("The sorted array is : ");
    for(i=0; i<size; i++)
    {
        printf(" %d ", a1[i]);
        
    }
    
}
int sum1( int a1[50][50], int size)
{
    int j, i,add;
    for( i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(i==j)
                add+=a1[i][j];
        }
        
    }
    return add;
}
