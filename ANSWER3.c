#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("enter 9 numbers of matrix\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("transpose of the matrix is:\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}