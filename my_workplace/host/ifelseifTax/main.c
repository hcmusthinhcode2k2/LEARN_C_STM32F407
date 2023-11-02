/*
 * main.c
 *
 *  Created on: 1 thg 10, 2023
 *      Author: thinh
 */
#include <stdio.h>
#include <stdint.h>

void wait_for_user_input(void)
{
	while (getchar()!='\n')
	{
		printf("Enter the any key for exit the application\n");
	}
	getchar();
}
int main(void)
{
	uint64_t income;
	uint64_t tax;

	double temp_income;
	printf("Enter your total income:");
	scanf("%lf",&temp_income);

	income = (uint64_t) temp_income;
	if (temp_income<0)
	{
		printf("Income can not be -ve \n");
		wait_for_user_input();
		return 0;
	}
	if (income<=9525)
	{
		tax=0;
	}else if ((income >9525) &&(income <=38700))
	{
		tax=income*0.12;
	}else if ((income >38700)&&(income <=82500))
	{
		tax=income*0.22;
	}else if (income>82500)
	{
		tax=income*0.32;
		tax=tax+1000; //tax+=1000;
	}
	printf("Tax payable : %I64u\n",tax);

	wait_for_user_input();
}

