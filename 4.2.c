#include<stdio.h>
void main()
{
    int row, column, i, j, a1[50][50], a2[50][50] ,a3[50][50];
    printf("Enter the row of array : ");
    scanf("%d",&row);
    printf("Enter the column of array : ");
    scanf("%d",&column);
    for(i=0; i<row; i++)
    {
        for (j=0; j<column; j++)
        {
            printf("Enter element [%d][%d] of array 1\n",i,j);
            scanf("%d",&a1[i][j]);
        
            printf("Enter element [%d][%d] of array 2\n",i,j);
            scanf("%d",&a2[i][j]);
        
        }
        

        
    }
    printf("The New Array is : \n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            a3[i][j]=a1[i][j]+a2[i][j];
            printf("%d\t",a3[i][j]);
        }
        printf("\n");

    }
}

    