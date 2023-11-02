/*
 * pointer.c
 *
 *  Created on: Sep 30, 2023
 *      Author: thinh
 */


#include <stdio.h>
int main(void)
{
	//0x00007FFF8E3C3824
	char data =100;
	printf("variable data is :%d\n",data);
	printf("Address of the variable	data is :%p\n",&data);

	char* pAddress =&data;
	char value=*pAddress;
	printf("read value is: %d\n",value);
	*pAddress=65;
	printf("Value of data is: %d\n",data);

}
