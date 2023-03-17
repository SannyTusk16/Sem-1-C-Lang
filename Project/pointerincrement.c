#include <stdio.h>
int max(int *i,int *j,int *k){
    int m;
int i1,j1,k1;
i1=*i;
j1=*j;
k1=*k;

m = (i1>j1)?((i1>k1)?i1:k1):((j1>k1)?j1:k1);
*i=*i+1;
return m;
}
int main(){
int i1,i2,i3,m;
int *j1,*j2,*j3,*n;
printf("Enter 3 numbers m8\n");
scanf("%d%d%d",&i1,&i2,&i3);
j1=&i1;
j2=&i2;
j3=&i3;
m = max (j1,j2,j3);
printf("The max is %d",m);
printf("\n %d",*j1);
return 0;
}

        
    
