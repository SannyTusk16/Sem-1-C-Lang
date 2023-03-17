#include <stdio.h>
void bubl(int a[],int n);
int bin(int f,int l,int a[],int e);
int main() {
    int a[10];
    int e;
    int n=10;
    printf("Enter the numbers");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter a number to check whether it is there in the array\n");
    scanf("%d",&e);
    bubl(a,10);
    if(bin(0,n-1,a,e)==-1){
        printf("It is absent\n");
    }
    else
        printf("The value is in %d",bin(0,n-1,a,e)+1);
    return 0;
}
void bubl(int a[],int n){
    int t;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(int j=0;j<n;j++){
        printf("%d\t",a[j]);
    }
}
int bin(int f,int l,int a[],int e){
    int av;
    av=(f+l)/2;
    if (f>l)
        return -1;
    if(a[av]=e)
        printf("f=%d\tl=%d",f,l);
        return av;
    if(a[av]<e)
        return bin(av,l,a,e);
    if(a[av>e])
        return bin(f,av,a,e);
}