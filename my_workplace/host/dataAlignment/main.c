/*
 * main.c
 *
 *  Created on: Oct 8, 2023
 *      Author: thinh
 */


#include <stdint.h>
#include <stdio.h>

struct dataSet{
	char data1;
	int  data2;
	char data3;
	short data4;
};
int main(void)
{
	struct dataSet data;
	data.data1=0x11;
	data.data2=0xFFFFEEEE;
	data.data3=0x22;
	data.data4=0xABCD;
	uint8_t *ptr;
	ptr = (uint8_t*)&data;
	uint32_t totalSize =sizeof(struct dataSet);
	printf("Memory address       Content \n");
	printf("================================");
	for (uint32_t i=0;i<totalSize;i++)
	{
		printf("%p      %X\n",ptr,*ptr);
		ptr++;
	}
	printf("Total memory consumend by this struct variable =%I64u\n",sizeof(struct dataSet));

	getchar();
}
