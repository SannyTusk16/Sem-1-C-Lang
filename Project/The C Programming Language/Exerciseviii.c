#include <stdio.h>
int main(){

    int b,t,n,c;

    b = t = n = 0;

    while(( c = getchar()) != EOF){

        if( c == ' ')
        ++b;
        if( c == '\t')
        ++t;
        if( c == '\n')
        ++n;

    }
    printf("Blanks = %d \n Tabs = %d \n NewLines = %d",b,t,n);
}