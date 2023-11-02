/*
 * main.c
 *
 *  Created on: 1 thg 10, 2023
 *      Author: thinh
 */


#include <stdio.h>
#include <stdint.h>

void wait_for_user_input()
{
	while (getchar()!='\n')
	{

	}
	getchar();
}
int main(void)
{
	float numb1,numb2;
	printf("enter numb1=");
	if (scanf("%f",&numb1)==0)
	{
		printf("invalid input! Exiting ..\n");
		wait_for_user_input();
		return 0;
	}
	printf("enter numb2=");
	if (scanf("%f",&numb2)==0)
	{
		printf("invalid input! Exiting ..\n");
		wait_for_user_input();
		return 0;
	}
	int32_t n1,n2;
	n1=numb1;
	n2=numb2;
	if ((n1!=numb1)||(n2!=numb2))
	{
		printf("Warning ! comparing only integer part \n");
	}
	if (n1==n2)
	{
		printf("Number are equal\n");
	}
	else
	{
		if (n1<n2)
		{
			printf("%d is bigger \n",n2);
		}else
		{
			printf("%d is bigger \n",n1);
		}
	}
}
