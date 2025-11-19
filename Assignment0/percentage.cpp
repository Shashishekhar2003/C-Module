#include<stdio.h>
int main(){
	float mark1,mark2,mark3,mark4,mark5, sumofmarks , percentage;
		printf("Enter the five number of marks:\n");
	scanf("%f %f %f %f %f",&mark1,&mark2,&mark3,&mark4,&mark5);
	
	sumofmarks = mark1+mark2+mark3+mark4+mark5;
	
	printf("\nsumofMarks: %.2f\n", sumofmarks);
	percentage = (sumofmarks/ 500) * 100;

    printf("Percentage: %.2f%%\n", percentage);
	
	return 0;
}