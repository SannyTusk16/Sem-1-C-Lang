#include <stdio.h>

float main(){
    float price[3];

    printf("enter the prices in order to return tax amount : ");
    scanf("%f\t%f\t%f", &price[0], &price[1], &price[2]);

    printf("The tax amounts respectively are \n%f\t%f\t%f\n",price[0],price[1],price[2]);
    printf("%f\t%f\t%f\n",0.18*price[0],0.18*price[1],0.18*price[2]);
}