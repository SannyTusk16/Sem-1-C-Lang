#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
typedef struct {
    int cnt;//count
    int slctd;//selected
    char dsply;//display
    int mine;//mine
}MINE;

void minefield(int s,MINE m[][s]){
int y,x,r;    
for(int i=0;i<s+1;i++){
    y=rand()%s;
    x=rand()%s;
    /*printf("\nThe Mine Locations Are %d %d",y+1,x+1);*/
    m[y][x].mine=10;
}
for (int i=0;i<s;i++){
        for (int j=0;j<s;j++){
        if(m[i][j].mine!=10)
            m[i][j].mine=0;
    }
    
} 
printf("\n\n");
}
int adjacent(int s,MINE m[s][s],int x,int y){
    int k=0;
    for(int i=y-1;i<y+2;i++){
        for(int j=x-1;j<x+2;j++){
            if((m[i][j].mine==10) && (i<=s && i>=0) && (j<=s && j>=0)){                
                /*printf("\n%d %d\n",i+1,j+1);*/
                k=k+1;
            }
        }
    }
    return (k+1);
}
int main (){
    int s;
    printf("THIS is the Grand Warden Of Games an you have been summoned to play the hardcore version of \n\tMiNeSwEepEr\n");
    printf("Enter the size of the minefield\t");
    scanf("%d",&s);
    MINE m[s][s];
    minefield(s,m);
    for(int k=0;k<s;k++){
    static int x,y;
    for (int i = 0; i < s; i++){
        for (int j = 0; j < s; j++){
            m[i][j].slctd=0;
        }
    }
    
    if(k==s/2){
        printf("I've taken a liking of you so you only have to detect %d safe spots\n",s);
    }
    printf("Enter the coordinates of the tile \t");
        scanf("%d %d",&y,&x);
        x=x-1;
        y=y-1;
        for ( int i = 0; i < s; i++){
            for (int j = 0; j < s; j++){
                m[j][i].dsply='*';
            }
        }
        /*for (int i = 0; i < s; i++){
            for (int j = 0; j < s; j++){
                 printf("%d\t",m[j][i].mine);
            }
            printf("\n");
        } for showing all mine locations */

    if(m[y][x].mine==10 || m[y][x].slctd==1){
        printf("\nYou are banished forever");
        printf("\n%d\t%d\n",m[y][x].mine,m[y][x].slctd);
        break;
        }
    else{
        m[y][x].cnt=adjacent(s,m,x,y);
        m[y][x].dsply=m[y][x].cnt + 47;
        for(int i=-1;i<s;i++){
            for(int j=-1;j<s;j++){
                if (j<0 && i<0){
                    printf("-0-\t");
                }
                if (j<0 && i>=0){
                    printf("-%d-\t",i+1);
                }
                if (i<0 && j>=0){
                    printf("-%d-\t",j+1);
                }
                if (i>=0 && j>=0){
                    printf("%c\t",m[j][i].dsply);
                }
                
            }
            printf("\n\n\n");
        }
        m[y][x].slctd=1;
    }
}
    return 0;
}
    

