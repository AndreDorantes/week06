/*This program converts hours and minutes to minutes*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int h, m, t;
	printf ("Insert the number of hours:");
	scanf ("%i", &h);
	printf ("Insert the number of minutes:");
	scanf ("%i", &m);
	t= h*60+m;
	printf ("The total minutes of %i hours and %i minutes is: %i", h, m, t);
	getch();
	return 0;
}
