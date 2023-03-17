#include <stdio.h>

#define IN 1 
#define OUT 0

int main(){
    int c, nc, nw, nl, state;

    state = OUT ;
    nl = nc = nw = 0;
    while ((c=getchar()) != EOF) {
        ++nc;
        if ( c == '\n')
        ++nl;
        if ( c == ' ' || c== '\n' || c== '\t')
        ++nw;
        

    }
    printf( " %d\t %d\t %d\t", nc, nw, nl);
}
