#include<stdio.h>
int main()
{
    int m,n,i,j;
    printf("enter order of the matrix:\n");
    scanf("%d%d",&m,&n);
    printf("enter %d numbers of the matrix:\n",m*n);
    int a[m][n],b[m];

    for(i=0;i<m;i++)
    {
        b[i]=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            b[i]++;
        }
    }
    for(i=0;i<m-1;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(b[i]>b[j])
            continue;
            else
            break;
        }
        if(j==m)
        printf("row %d contains most no. of 1's ",i+1);
    }
    return 0;
}