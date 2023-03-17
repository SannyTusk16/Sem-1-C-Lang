#include <stdio.h>
/*testing put char and get char*/
int main()
{
    int c ;
    c = getchar() ;

    while(c != EOF){
        putchar(c);
        c = getchar();
    }
}