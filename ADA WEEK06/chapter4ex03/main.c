/* This program will compute the area and perimeter of a rectangle */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a1, p1, la, lb;
	float a2, p2, lc, ld;
	la=3;
	lb=5;
	lc=6.8;
	ld=2.3;
	a1= la*lb;
	p1= 2*(la+lb);
	a2= lc*ld;
	p2= 2*(lc+ld);
	printf ("The area of the first rectangle is %i and the perimeter is %i", a1, p1);
	printf ("\nThe area of the second rectangle is %f and the perimeter is %f", a2, p2);
	printf ("\nFor the first rectagnle you use int because you input integral numbers, and in the second square you use float because you input numbers with decimals.");
	getch();
	return 0;
}
