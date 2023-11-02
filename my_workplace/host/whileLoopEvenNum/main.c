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
		printf("Press enter key to exit this application\n");
	}
	getchar();
}

int main (void)
{
	int32_t start_num,end_num;
	uint32_t even;
	printf("Enter starting and ending numbers(give space between 2 nos):");
	scanf("%d %d",&start_num,&end_num);

	if (end_num<start_num)
	{
		printf("ending number should be>starting number\n");
		wait_for_user_input();
		return 0;
	}
	printf("Even numbers are:\n");
	even=0;

	while (start_num<=end_num)
	{
		if (!(start_num % 2))
		{
			printf("%d\t",start_num);
			even++;
		}
		start_num++;
	}
	printf("\nTotal even numbers :%u\n",even);
	wait_for_user_input();
}
