#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
// the 2d array which will be printed is a character array
int i,j;
// this function is used to check whether a selected position has a mine in it or not
//if there's a mine then it returns 10 -> GAME OVEr else it returns 0. There's a if cond. based on this functon in main 
int select(int s,int mine[s][s],int y,int x){
    int q=0;
     if(mine[y][x]== 10)
            return 10;
    else{
        for (i=y-1;i<=y+1;i++){
                for(j=x-1;j<=x+1;j++)
                {
                    if(mine[i][j]=10)
                        q++;
                }
            }
            mine[i][j]=q;
            return 0;
        }
}
// this is used to initialise the minefield after the player enters the size
void minefield(int s,int mine[s][s]){
    int y,x,r;    
    for(i=0;i<s+1;i++){
        y=rand()%s;
        x=rand()%s;
        printf("\nThe Mine Locations Are %d %d",y+1,x+1);
        mine[y][x]=10;
    }
    for (i=0;i<s;i++){
        for (j=0;j<s;j++){
            if(mine[i][j]!=10)
                mine[i][j]=0;
        }
        
    }
    
    printf("\n\n");
}
int adjacent(int s,int mine[s][s],int x,int y){
    int k;
    for(i=x-1;i<x+2;i++){
        for(j=y-1;j<y+2;j++){
            if(mine[i][j]==10)
                k++;
        }
    }
    return k;
}

int main(){
    int c,s,x,y;
    printf("Enter the size of the minefield\t\t");
    scanf("%d",&s);
    printf("\t....\t\n");
    int mine[s][s];
    int select[s][s];
    minefield(s,mine);
    for(i=-1;i<s;i++){
        for(j=-1;j<s;j++){
            if(i==-1 && j!=-1)
                printf("-%d-\t",j+1);
            if(i!=-1 && j!=-1)
                printf(" %d\t",mine[i][j]);
            if(j==-1 && i ==-1)
                printf(" \t");
            if(j==-1 && i!=-1)
                printf("-%d-\t",i+1);
        }
        printf("\n\n\n");
    }
    for(i=0;i<s;i++){
        for(j=0;j<s;j++){
            select[i][j]=0;
        }
    }
    //entering and determininting the number of bombs beside selected tile
        c=1;
        while(c!=0){
            printf("Enter The Co-Ordinates in the format of (x,y)\t");
            scanf("%d%d",&y,&x);
            printf("\n\t%d\t%d\n\n\t",y,x);
            y=y-1;
            x=x-1;
            if(select[x][y]==0){
                if(mine[x][y]==10){
                    printf("\nYou Lost!.!");
                    select [x][y]=1;
                    c=1;
                }
                if(mine[x][y]!=10){
                    printf("*_*\t You got me there but you are safe");
                    select[x][y]=adjacent(s,mine,x,y);
                    printf("\nThere are %d bombs beside the selected block",select[x][y]);
                }
            }
            else
            printf("\nAlready Selected!.!");
        }
        
}
