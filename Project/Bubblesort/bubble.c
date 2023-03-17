#include <stdio.h>

int main(){
    int i,j,temp,n,c;
    n = 5;
    int a[5];
    printf("Enter 5 numbers to sort\n");
     printf("\nyour 1st number is :");
   scanf("%d",&a[0]);
   
    printf("\nyour 2nd number is :");
   scanf("%d",&a[1]);     
   
    printf("\nyour 3rd number is :");
   scanf("%d",&a[2]);
   
    printf("\nyour 4th number is :");
   scanf("%d",&a[3]);
   
    printf("\nyour 5th number is :");
   scanf("%d",&a[4]);

    
        
    
    for ( i = 0; i < n-1; i++){
        for(j=0;j<n-i-1;j++)
    {
        if (a[j] > a[j+1])
        {
            temp = a[j];
            a[j] = a[j+1];
            a[j+1]= temp;
        }
        
    }
    }
    


printf("%d %d %d %d %d ",a[0],a[1],a[2],a[3],a[4]);
}
