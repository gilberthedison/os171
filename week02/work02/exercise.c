/*
* Name: Gilbert Hedison
* NPM: 1606893424
* Class: C
* Comment: Lab kali ini menambah ilmu saya di bahasa pemrograman C dan saya cukup enjoy melakukan lab ini
*/
#define LOOP 7
#include <stdio.h>
void main() {
 int input = 5,product=0,count=0;
 	for (count;count<LOOP;count++){
	product+=input;
	}
	printf("%d times %d equals %d \n",input,LOOP,product);
}
