/*
 * main.c
 *
 *  Created on: 9 thg 10, 2023
 *      Author: thinh
 */


#include <stdint.h>
#include <stdio.h>

struct DataSet {
    char  data1;
    int   data2;
    char  data3;
    short data4;
};

void displayMemberElements(struct DataSet *pdata);

int main(void) {
    struct DataSet data;
    data.data1 = 0x11;
    data.data2 = 0xEEEEFFFF;
    data.data3 = 0x22;
    data.data4 = 0xABCD;

    displayMemberElements(&data);
    getchar();
    return 0;
}

void displayMemberElements(struct DataSet *pdata) {
    printf("data1= %X\n", (unsigned int)pdata->data1);
    printf("data2= %X\n", pdata->data2);
    printf("data3= %X\n", (unsigned int)pdata->data3);
    printf("data4= %X\n", (unsigned int)pdata->data4);
}

