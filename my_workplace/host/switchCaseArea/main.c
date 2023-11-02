/*
 * main.c
 *
 *  Created on: 2 thg 10, 2023
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
	int8_t code;
	float r,b,h,a;
	float area;
	printf("Area calculation program\n");
	printf("Circle    --> c\n");
	printf("Triangle  --> t\n");
	printf("Trapezoid --> z\n");
	printf("Square    --> s\n");
	printf("Rectangle --> r\n");
	printf("Enter the code here:\n");
	scanf("%c",&code);
	switch (code)
	{
	case 'c':
		printf("Circle Area calculation\n");
		printf("Enter radius(r) value:");
		scanf("%f",&r);
		if (r<0)
		{
			printf("radius cannot be -ve \n");
			area=-1;
		}else
		{
			area =3.1415*r*r;
		}

		break;
	case 't':
		printf("Triangle Area calculation \n");
		printf("Enter base(b)value:");
		scanf("%f",&b);
		printf("Enter base(h)value:");
		scanf("%f",&h);
		area=(b* h)/2;
		break;
	case 'z':
		printf("Trapezoid Area calculation \n");
		printf("Enter base(a) value:\n");
		scanf("%f",&a);
		printf("Enter base(b) value:\n");
		scanf("%f",&b);
		printf("Enter base(h) value:\n");
		scanf("%f",&h);
		area=((a+b)/2)*h;
		break;
	case 's':
		printf("Square Area calculation \n");
		printf("Enter side(a) value:");
		scanf("%f",&a);
		area=a*a;
		break;
	case 'r':
		printf("Rectange Area calculation \n");
		printf("Enter width(w) value:\n");
		scanf("%f",&a);
		printf("Enter length(l) value:\n");
		scanf("%f",&b);
		area=a*b;
		break;
	default:
		printf("Invalid input\n");
		area=-1;
	}
	if (!(area<0))
	{
		printf("Area=%f\n",area);

	}else
	{
			}
	wait_for_user_input();
}
