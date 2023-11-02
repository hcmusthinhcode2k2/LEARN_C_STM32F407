/*
 * main.c
 *
 *  Created on: Oct 11, 2023
 *      Author: thinh
 */

#include <stdio.h>

#define PI_VALUE 3.1415f

#define AREA_OF_CIRCLE(r) ((PI_VALUE)*(r)*(r))

int main(void)
{
	float area_circle;
	area_circle=AREA_OF_CIRCLE(2);
	printf("Area= %f\n",area_circle);
	return 0;
}
