/*
 * main.c
 *
 *  Created on: Oct 3, 2023
 *      Author: thinh
 */


#include <stdint.h>
void wait_for_user_input(void)
{
	while (getchar()!='\n')
	{
		printf("Enter any key to exit the application\n");
	}
	getchar();

}
int main(void)
{
	int32_t numb1;
	printf("Enter a number:");
	scanf("%d",&numb1);
	if (num1 & 1)
	{
		printf("%d is odd number\n",numb1);
	}else
	{
		printf("%d is even number\n",numb1);
	}
	wait_for_user_input();
}
