#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
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
        for(j=0;j<=2;j++)
        {
            if((i+j)==2)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("sum of left diagonals of the matrix is %d",sum);
    return 0;
}