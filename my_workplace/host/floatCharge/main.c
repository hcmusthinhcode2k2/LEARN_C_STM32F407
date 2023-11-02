/*
 * main.c
 *
 *  Created on: Sep 30, 2023
 *      Author: thinh
 */

#include <stdio.h>

int main(void)
{
		double charge,chargeE;
		printf("Enter the charge:");
		scanf("%lf",&charge);

		printf("Enter the charge of an electron:");
		scanf("%le",&chargeE);

		double electrons=(charge/chargeE)*-1;
		printf("Total number of electrons =%le\n",electrons);
		printf("Total number of electrons =%lf\n",electrons);
		while (getchar()!='\n')
		{

		}
		getchar();

}
