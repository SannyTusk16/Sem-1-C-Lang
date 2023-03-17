#include <stdio.h>

float main(){

    int f ;
    for( f = 0; f <= 300; f = f + 20)
    printf( "%d\t%d\n",f,5*(f-32)/9);
}