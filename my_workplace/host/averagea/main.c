/*
 * main.c
 *
 *  Created on: Sep 29, 2023
 *      Author: thinh
 */

#include <stdio.h>

int main(void)
{
	float number1,number2,number3;
	float average;
	printf("number 1=");
	fflush(stdout);
	scanf("%f",&number1);
	printf("number 2=");
	fflush(stdout);
	scanf("%f",&number2);

	printf("number 3=");
	fflush(stdout);
	scanf("%f",&number3);

	average=(number1+number2+number3)/3;
	printf("%f\n",average);
	printf("Press enter key to exit the application \n");
	while (getchar()!='\n')
	{

	}
	getchar();
}

