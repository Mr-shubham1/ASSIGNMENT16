#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    printf("enter 9 numbers of a matrix:\n");
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
           if(i==j)
           {
            sum=sum+a[i][j];
           }
        }
       
    }
    printf("sum of right diagonals of matrix is %d",sum);
   
}