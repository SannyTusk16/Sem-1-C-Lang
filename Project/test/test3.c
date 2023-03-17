#include <stdio.h>
void bub(int a[],int n){
    int i,j,k,t;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;){
            if(a[j]>a[j-1]){
                t=a[j-1];
                a[j-1]=a[j];
                a[j]=t;
            }

        }
    }
}

int binary(int a[],int i,int l,int k){
    if (l>=1){
    int ave;
    ave=(i+l)/2;
    if(ave == k){
      return 1;
      }
        if (ave < k){
        return binary(a,ave+1,l,k);
        }
        else {
        return binary(a,i,ave-1,k);
        }
    }
        return 0;  
}
int main (){
    int n,i,k;
    printf("Enter the number of entries\t");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter a number to be searched\t");
    scanf("%d",&k);
    bub(a,n);
   if( binary(a,0,n-1,k))
    printf("It is there");
    else
    printf("It isn't here");
    return 0; 
}
