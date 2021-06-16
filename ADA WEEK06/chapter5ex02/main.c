/*This program calculates the volume of a sphere*/

#include <stdio.h>
#include <stdlib.h>
#define pi 3.1416

int main(int argc, char *argv[]) {
	float v, r;
	printf ("Insert the raduis of the sphere to get the volume:");
	scanf ("%f", &r);
	v= (4*pi*r*r*r)/3;
	printf ("The volume of the sphere is: %f", v);
	getch();
	return 0;
}
