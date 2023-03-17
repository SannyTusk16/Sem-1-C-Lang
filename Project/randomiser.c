#include <stdio.h>
void  chance(int,int);
int main(){
    int a,b;
    printf("This is a random number generator at it's basic form\n");
    printf("Enter a number to get a number between 0 and given number\n");
    scanf("%d",&a);
    printf("Enter another number between 0 and %d",a-1);
    scanf("%d",&b);
    chance(a,b); 
    return 0;
}
void chance(int a,int b){
    int ar[a];
    int r[a];
    int i;
    for(i=0;i<a;i++){
        r[i]=ar[i]%a;
    }
    printf("THE randomised OUTPUT IS %d",r[b]);
}

