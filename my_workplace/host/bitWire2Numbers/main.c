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
	while (getchar()=='\n')
	{
	    printf("Enter the any key to exit the applicatiop\n");
	}
	getchar();
}

int main(void)
{
	int32_t numb1,numb2;
	printf("Enter 2 numbers(give space between 2 nos):");
	scanf("%d %d",&numb1,&numb2);

	printf("Bitwise AND(&):%d\n",(numb1&numb2));
	printf("Bitwise OR(|):%d\n",(numb1|numb2));
	printf("Bitwise XOR(^):%d\n",(numb1^numb2));
	printf("Bitwise NOT(~):%d\n",(~numb1));
	wait_for_user_input();
}
