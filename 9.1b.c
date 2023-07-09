#include<math.h>
#include<stdio.h>
void main()
{
    int size, a1[50],x2,sum=0,sumx=0;
    float variance,dev;
    printf("Enter the no of data : ");
    scanf("%d",&size);
    for(int i=0; i<size; i++)
    {
        printf("Enter %d value : ",i+1);
        scanf("%d",&a1[i]);
        x2=a1[i]*a1[i];
        sumx+=a1[i];
        sum+=x2;
    }
    variance = (sum/size)-((sumx/size)*(sumx/size));
    dev=sqrt(variance);
    printf ("Standard Deviation is : %f ", dev);

}

    