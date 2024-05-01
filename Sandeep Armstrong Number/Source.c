#include <stdio.h>


int main()
{
	int a,ori,digit,sum=0,cube;
	printf("Please enter a number a = ");
	scanf_s("%d", &a);

	 ori = a;
    
	 while (a > 0)
	 {
		 digit = a % 10; //153 = 3
		 cube = digit * digit * digit;
		sum = sum + cube;
		a = a / 10;

	 }
	 if (sum == ori)
	 {
		 printf("The number is armstrong !!");
	 }
	 else
	 {
		 printf("The number is not armstrong !!");

	 }

}