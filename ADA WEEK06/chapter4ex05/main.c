/* This program will debaretely make errors */

#include <stdio.h>
#include <stdlib.h>

float floatnum;     
int intnum;         
char character; 

int main(int argc, char *argv[]) {
	floatnum = 1.0;
	intnum = 1;
	character = 'C';

	printf("%f as %%d: %d\n", floatnum, floatnum);
	printf("%d as %%f: %f\n", intnum, intnum);
	printf("%c as %%d: %d\n", character, character);
	
	getch();
	return 0;
}
