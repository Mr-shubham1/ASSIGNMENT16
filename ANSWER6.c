#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum;
    printf("enter 9 numbers of matrix:\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<=2;i++)
    {
        sum=0;
        for(j=0;j<=2;j++)
        {
          sum+=a[i][j];
        }
        printf("sum of row %d is: %d\n",i+1,sum);
    }
     for(i=0;i<=2;i++)
    {
        sum=0;
        for(j=0;j<=2;j++)
        {
          sum+=a[j][i];
        }
        printf("sum of column %d is: %d\n",i+1,sum);
    }
     return 0;
}