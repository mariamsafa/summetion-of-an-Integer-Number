// summetion of an Integer Number
#include<stdio.h>
int main()
{
	int number, remainder, sum=0;
	printf("Enter an Interger number : ");
	scanf_s("%d", &number);
	while (number != 0)
	{
		remainder = number % 10;
		number = number / 10;
		sum = sum + remainder;
	}
	printf("\nSum of the Integer number is %d \n", sum);
}