/*
 * main.c
 *
 *  Created on: 27 thg 9, 2023
 *      Author: thinh
 */

#include <stdio.h>

void sum_funtion(int a,int b,int c);
void sum_funtion(int a,int b,int c)
{
		int sum;
		sum=a+b+c;
		printf("Sum= %d\n",sum);
}
int main(void)
{
	sum_funtion(3,4,5);
	sum_funtion(6,6,6);
	int value_1=10;
	int value_2=15;
	sum_funtion(value_1,value_2,10);
	return 0;
}
