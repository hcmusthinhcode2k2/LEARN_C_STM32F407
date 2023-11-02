/*
 * main.c
 *
 *  Created on: 1 thg 10, 2023
 *      Author: thinh
 */


#include <stdio.h>
int main(void)
{
	int age=0;
    printf("Enter the age:");
    scanf("%d",&age);
    if (age<18)
    {
    	printf("Sorry! you are not eligible to vote\n");
    }else {
    	printf("Congrats! you are eligible to vote\n");
    }
	printf("Press enter key to exit this application");
	while (getchar()!='\n')
	{

	}
}
