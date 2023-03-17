# include<stdio.h>
int main(){
    printf("Press \"0\"to start\t ");
    int s;
    printf("\tEnter the size of the minefield ranging from 5-10 \n");
    scanf("%d",&s);
    int a[s][s];
    int i,j;
    //setting up mines
    for(i=0;i<s;i++){
        for(j=0;j<s;j++){
            if(a[i][j]%4==0)
                a[i][j]=0;
            else
                a[i][j]=1;
        }
    }
    //printing the minefield
     for(i=-1;i<s;i++){
        for(j=-1;j<s;j++){
            if(i==-1 && j!=-1){
                printf("%c\t",j+65);
            }
            if(i!=-1 && j!=-1){
            printf("%d\t",a[i][j]);
            }
            if(j==-1 && i ==-1){
                printf(" \t");
            }
            if(j==-1 && i!=-1){
                printf("%c\t",i+65);
             }
        }
        printf("\n\n\n");
    }
}

    