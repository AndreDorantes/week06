/*This program converts centigrade to fahrenheit*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float c, f;
	printf ("Insert the centigrades that you want to convert to fahrenheit:");
	scanf ("%f", &c);
	f= 1.8*c + 32;
	printf ("The convertion of %f is %f", c, f);
	getch();
	return 0;
}
