#include<stdio.h>

int main()
{
	int number,cube,square;
	
	printf("Enter the number");
	scanf("%d",&number);
	
	square = number * number;
	cube = number * number * number;
	
	printf("the square of %d is:",number,square);
	printf("the cube of %d is:",number,cube);
	
	return 0;
}