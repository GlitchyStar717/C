#include<stdio.h>
void main()
{
    int i, j, a[2][2], lowest, highest;
    
    for(i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("Enter element [%d][%d] of array 1\n",i,j);
            scanf("%d",&a[i][j]);
        
            
        }
        

        
    }

    lowest = a[0][0];
    highest = a[0][0];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(a[i][j]<lowest)
                lowest = a[i][j];
            if(a[i][j]>highest)
                highest = a[i][j];
        }

    }

    printf ("THe Highest and lowest element are %d and %d resprectively.",highest,lowest);
    
}

    