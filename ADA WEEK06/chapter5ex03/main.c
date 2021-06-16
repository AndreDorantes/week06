/*This program calculates the perimeter of a rectangle*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float h, w, p;
	printf ("Insert the height of the rectangle:" );
	scanf ("%f", &h);
	printf ("Insert the width of the rectangle:" );
	scanf ("%f", &w);
	p= 2*(w+h);
	printf ("The perimeter of the rectangle is: %f", p);
	getch();
	return 0;
}
