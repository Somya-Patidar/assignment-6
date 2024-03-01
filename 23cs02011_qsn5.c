#include<stdio.h>
int main(){
    int m,n;
    printf("enter the no of rows and column:");
    scanf("%d%d",&m,&n);
    
    int arr[m][n];
    int tran[n][m];
    printf("enter matrix\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            tran[j][i]=arr[i][j];
        }
    }
    printf("transpose of matrix is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",tran[i][j]);
        }
        printf("\n");
    }
}