/*This progrma converts kilometers per hour to miles per hour*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float k, m;
	printf ("Insert the kilmeters per hour:");
	scanf ("%f", &k);
	m= k*0.6213712;
	printf ("The convertion of %f kilemters per hour to miles per hour is: %f", k, m);
	getch();
	return 0;
}
