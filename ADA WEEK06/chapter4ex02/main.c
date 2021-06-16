/* This program will make a big E */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int i;
	for(i=1;i<7;i++)
	printf("*");

	for(i=1;i<3;i++)
	printf("*\n");

	for(i=1;i<7;i++)
	printf("*");

	for(i=1;i<3;i++)
	printf("*\n");

	for(i=0;i<7;i++)
	printf("*");
	
	getch();
	return 0;
}
