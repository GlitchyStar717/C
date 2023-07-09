#include<stdio.h>
void main()
{
    int row, i, a[50],lowest, highest;
    printf("Enter the row of array : ");
    scanf("%d",&row);
    for(i=0; i<row; i++)
    {
        printf ("Enter element [%d] of array 1 : ", i);
        scanf("%d",&a[i]);
    }
        
    lowest = a[0];
    highest = a[0];

    for(int i=0; i<row; i++)
    {
        if (a[i]<lowest)
            lowest = a[i];
        if (a[i]>highest)
            highest = a[i];
    }
    
    printf("The min and max elements are : %d and %d respectively.", lowest, highest);
}

    