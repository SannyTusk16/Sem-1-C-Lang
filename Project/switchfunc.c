#include <stdio.h>

int main(){
    int a,b;
    char op;
    int clrscr();

    printf("Enter Numbers A and B");
    scanf("%d%d",&a,&b);
    printf("Enter Required Operator + - * //");
    fflush(stdin);
    scanf("%c",&op);

    switch(op){

        case '+' : printf("Addition = %d",a+b);break;
        case '-' : printf("Subtraction = %d",a-b);break;
        case '*' : printf("Multiplication = %d",a*b);break;
        case '/' : printf("Division = %d",a/b);break;
    }
    getchar();
}