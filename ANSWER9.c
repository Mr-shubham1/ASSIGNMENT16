#include<stdio.h>
int main()
{
    int m,n,i,j,count1=0,count2=0;
    printf("enter order of the matrix:\n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("enter %d numbers of the matrix:\n",m*n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==0)
            count1++;
            else
            count2++;
        }
        
    }
    if(count1>count2)
    printf("given matrix is sparse matrix");
    else
    printf("given matrix is NOT sparse matrix");
    return 0;
    
}