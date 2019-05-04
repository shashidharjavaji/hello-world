# hello-world
first repository
#include <stdio.h>
void main()
{  
   int a,b;
   printf("enter the numbers to swap");
   scanf("%d\n%d",&a,&b);
   printf("The numbers before swapping are a=%d and b=%d",&a,&b);
   swap(&a,&b);
   printf("After swapping the numbers are a=%d and b=%d",&a,&b);
}
void swap(int *a,int *b)
{
   int temp;
   temp=*b;
   *b=*a;
   *a=temp;
}
