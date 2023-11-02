/*
 * main.c
 *
 *  Created on: Oct 11, 2023
 *      Author: thinh
 */

#include <stdint.h>
#include <stdio.h>

int main()
{
	char name[30];
	printf("Enter your name:");
	fflush(stdout);
	scanf("%s",name);

	printf("Hi,%s\n",name);
	fflush(stdout);

	return 0;
}
