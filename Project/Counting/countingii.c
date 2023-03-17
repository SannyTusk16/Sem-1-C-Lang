#include <stdio.h>

int main(){
 
    int nl;
    char c;
    nl = 0 ;
    while((c=getchar()) != EOF)
    if( c == ' ' )
    nl++;
    printf("The number of lines in the given data is %d",nl);
}