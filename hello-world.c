#include <stdio.h> 
void swap(int *firstNumber,int *secondNumber) 
{   
  int temp;
  temp=*secondNumber; 
  *secondNumber=*firstNumber; 
  *firstNUmber=temp; 
}
void main() 
{
  int firstNUmber,secondNumber;
  printf("enter the numbers to swap");
  scanf("%d\n%d",&firstNUmber,&secondNumber);
  printf("The numbers before swapping are firstNUmber=%d and secondNumber=%d",&firstNUmber,&secondNumber);
  swap(&firstNUmber,&secondNumber); 
  printf("After swapping the numbers are firstNUmber=%d and secondNumber=%d",&firstNUmber,&secondNumber);  
} 

