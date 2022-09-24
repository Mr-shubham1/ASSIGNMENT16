#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("enter 9 numbers of  matrix:\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            
            if(j>=i)
            printf("%d",a[i][j]);
            else
            printf(" ");
        }
        printf("\n");
    }
        return 0;
}