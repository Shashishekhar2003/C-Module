#include<stdio.h>
int main()
{
	float num1,num2,num3,num4,num5, sum, average;
	
	printf("Enter the five number:\n");
	scanf("%f %f %f %f %f",&num1,&num2,&num3,&num4,&num5);
	sum = num1+num2+num3+num4+num5;
	average = sum/5;
	printf ("the sum of average of five average number is :%f\n",average);
	
	return 0;

}