#include <stdio.h>

int pwr(int base,int p);

int main(){

    int i;

    for (i = 0; i < 10; ++i)
    printf("%d %d %d\n",i,pwr(2,i),pwr(3,i));
    return 0;
}

int pwr( int a, int b){

int i,p;

p = 1;
for(i = 1; i <= b; ++i)
    p = p * a;
return p;
}