#include <stdio.h> 
                                    /* fahrenheit-celsius table */

 int main() 
{
 int f,c ;
 int l,d,u;

   l = 0; /*lower limit of fahrenheit values*/
   d = 20; /* the common difference*/
   u = 300; /*upper limit of fahrenheit values*/

   f = l;
   while(f <= u)
   {
    c=5*(f-32)/9;
    printf( "%i \n, %i \t", f,c);
    f = f+d ;
   }
}