#include <stdio.h> 
                                    /* we are including a library of functions namely standard input output <stdio.h> */
 int add (int,int);

int main() 
{
	printf("Addtion of 2 numbers namely 2 and 3\n");
	int m=2,n=3, sum;
    sum = add(m,n);
    printf("is %d", sum);
    printf("sum of 4+16 = %d", add(4,16));
}
 int add(int a, int b)
  {
  	  return a+b ;
  }