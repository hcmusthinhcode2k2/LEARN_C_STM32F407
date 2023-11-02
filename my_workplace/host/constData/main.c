/*
 * main.c
 *
 *  Created on: 5 thg 10, 2023
 *      Author: thinh
 */
#include <stdio.h>
#include <stdint.h>

int main(void)
{
		uint8_t const data=50;
		printf("Value =%u\n",data);
		uint8_t *ptr=(uint8_t*)&data;
		*ptr=50;
		printf("Value =%u\n",data);
		getchar();
}

