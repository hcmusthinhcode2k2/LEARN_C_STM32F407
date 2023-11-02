/*
 * main.c
 *
 *  Created on: 5 thg 10, 2023
 *      Author: thinh
 */

#include <stdio.h>
#include <stdint.h>
void wait_for_user_input(void)
{
	while (getchar()!='\n')
	{

	}
	getchar();
}

int main(void)
{
	uint8_t num=1;

	while (num<=10)
	{
		printf("%d\n",num++);
	}
	wait_for_user_input();
}


