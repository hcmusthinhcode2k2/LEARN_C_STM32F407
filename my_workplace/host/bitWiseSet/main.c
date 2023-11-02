/*
 * main.c
 *
 *  Created on: Oct 3, 2023
 *      Author: thinh
 */

#include <stdio.h>
#include <stdint.h>
void wait_for_user_input(void)
{
	while (getchar()!='\n')
	{
		printf("Enter any key to exit the application\n");
	}
	getchar();

}
int main (void)
{
	int32_t num1,output;
	printf("Enter a number:");
	scanf("%d",&num1);
	output=num1|0x90;
	printf("[input] [output] :0x%x 0x%x\n",num1,output);
	wait_for_user_input();
}
