#include<stdio.h>
#include<conio.h>
void main(){
    int A[10][10],B[10][10],i,j,m,n,t;
    printf("\n\tEnter no of rows : ");
    scanf("%d",&m);
    printf("\n\tEnter no of Columns : ");
    scanf("%d",&n);
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("\n\tEnter A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n\tMatrix Enter by You\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("\t%d",A[i][j]);
        }
        printf("\n");
    }
    //Code Logic
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if(i>j){
                t=A[i][j];
                A[i][j]=A[j][i];
                A[j][i]=t;
            }
        }
    }
    printf("\n\tTransepose of matrix\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("\t%d",A[i][j]);
        }
        printf("\n");
    }
}
