#include <stdio.h>

/* no need to declare a varible here and no need to use ; for replace statements*/
#define  LOWER 0   /*lower value of fahrenheit*/
#define  UPPER 300/*upper value of fahrenheit*/
#define  STEP 20 /*step up  value of fahrenheit*/

int  main()
    {
        int f;

        for( f = LOWER ; f <= UPPER ; f = f + STEP )
        printf(" %3d\t %3d\n ", f , 5*(f-32)/9);
    }