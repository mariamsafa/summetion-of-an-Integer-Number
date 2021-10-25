// Summetion of an Integer Number
#include<stdio.h>
int main()
{
	int number, remainder, sum=0;
	printf("Enter an Interger number : ");
	scanf_s("%d", &number);

	int i;
	for (i=0; i <= number; i++)
	{
		remainder = number % 10;
		number = number / 10;
		sum = sum + remainder;
	}
	printf("\nSum of the Integer number is %d \n", sum);
/*

	while (number != 0)
	{
		remainder = number % 10;
		number = number / 10;
		sum = sum + remainder;
	}
	printf("\nSum of the Integer number is %d \n", sum);

*/
	return 0;
}