#include<stdio.h>
int main()
{
  int a[3][3],b[3][3],c[3][3],i,j,k;
    printf("enter 9 digits of the matrix A\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
     printf("enter 9 digits of the matrix B\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    printf("product of the matrix is:\n");
    int sum=0; 
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
       {
        sum=0;
          for(k=0;k<=2;k++)
           {
             sum=sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            printf("%d ",c[i][j]);
        }
        printf("\n");
        
    } 
    return 0;
}