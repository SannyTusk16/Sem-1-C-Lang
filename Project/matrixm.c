#include <stdio.h>
int main(){
    int i,j,k;
    int l,m,n;
    printf("Enter the order of matrix A\t");
    scanf("%d %d",&l,&m);
    printf("Enter the order of matrix B\t");
    scanf("%d",&n);
    int a[l][m],b[m][n];
    int c[l][n];
    for(i=0;i<l;i++){
        for(k=0;k<n;k++){
            c[i][k]=0;
            printf("%d\t",c[i][k]);
        }
        printf("\n");
    }
    printf("Enter the elements of Matrix A \n");
    for  (i=0; i<l; i++)
    {
        for(j=0; j<m;j++){
            scanf("%d",&a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("Enter the elements of Matrix B \n");
    for  (j=0; j<m; j++)
    {
        for(k=0; k<n;k++){
            scanf("%d",&b[j][k]);
            printf("\t");
        }
        printf("\n");
    }
    for(i=0;i<l;i++){
        for(k=0;k<n;k++){
            c[i][k]=0;
            for(j=0;j<m;j++){
                c[i][k] = c[i][k] + a[i][j]*b[j][k];
            }
        }
    }
    for(i=0;i<l;i++){
        for(k=0;k<n;k++){
            printf("%d\t",c[i][k]);
        }
        printf("\n");
    }
    return 0;
}