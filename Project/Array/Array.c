#include <stdio.h>

int main(){
    /*We are making an array with printf scanf*/

    int marks[3];

    printf("Enter your math marks here: ");
    scanf("%d", &marks[0]);

    printf("Enter your physics marks here: ");
    scanf("%d", &marks[1]);

    printf("Enter your chemistry marks here: ");
    scanf("%d", &marks[2]);

    printf("Your marks are\n math \t physics \t chemistry\n %4d\t %7d\t %9d\n",marks[0],marks[1],marks[2]);
}