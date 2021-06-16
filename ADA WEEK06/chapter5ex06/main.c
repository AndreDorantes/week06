/*This program calulates the number of Hour:minutes*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int t, h,m;
	printf ("Insert the total number of minutes:");
	scanf("%i", &t);
	h= t/60;
	m= t%60;
	printf ("The number of hours:minutes of %i is %i hours %i minutes", t, h, m);
	getch();
	return 0;
}
