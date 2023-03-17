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
    printf("\nThe Mine Locations Are %d %d",y+1,x+1);
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
            if(m[i][j].mine==10)
                k++;
        }
    }
    return k;
}
int main (){
    int s;
    printf("Enter the size of the minefield\t");
    scanf("%d",&s);
    MINE m[s][s];
    minefield(s,m);
    int x,y;
    printf("Enter the coordinates of the tile \t");
        scanf("%d %d",&x,&y);
        x=x-1;
        y=y-1;
        m[y][x].slctd=1;
        for ( int i = 0; i < s; i++){
            for (int j = 0; j < s; j++){
                m[j][i].dsply='*';
            }
        }
        for (int i = 0; i < s; i++)
        {
            for (int j = 0; j < s; j++)
            {
                 printf("%d\t",m[j][i].mine);
            }
            printf("\n");
        }
        
    
    if(m[y][x].mine==10)
        printf("\nMission Failed");
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
    }
    return 0;
}
    

