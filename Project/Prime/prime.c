#include <stdio.h>
#include <math.h>

/* To check whether a number is prime or not */
int main(){

     int n,i,r,t;
     t = 0;
    printf("If the number you input is prime then 0 is displayed\n Otherwise 1 is displayed.\n\n\n Your Number Is :");
    scanf("%d",&n);
     for( i = 2 ; i <= n/2 ; i = i + 1 ){

          r = n%i;

            if ( r == 0){
            t = 1 ;}        /* learnt that you must use %d and not %i */
            
     }
    printf("%d",t);
}