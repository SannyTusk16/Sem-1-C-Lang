#include <stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows and coloumns required\n");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i<j)
                arr[i][j]=-1;

            if(i>j)
                arr[i][j]=1;
            else
                arr[i][j]=0;
                
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}