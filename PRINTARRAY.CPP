#include<stdio.h>
#include<conio.h>
int main()
{
    int A[10][10],i,j,m,n,s=0;
    printf("\n\tEnter no of rows and colomns : ");
    scanf("%d%d",&m,&n);
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("\n\tEnter A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("\t%d",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
