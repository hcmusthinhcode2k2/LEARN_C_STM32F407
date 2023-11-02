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
int main(void)
{
	int32_t numb1,output;
	printf("Enter the number:\n");
	scanf("%d",&numb1);
	output=numb1 & 0x70;
	printf("[input] [output] :0x%x 0x%x\n",numb1,output);
	wait_for_user_input();
}

