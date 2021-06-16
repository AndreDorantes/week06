/*This is program that will print your name, social security number, and date of birth*/

#include <stdio.h>
#include <stdlib.h>
#define a 50

int main(int argc, char *argv[]) {
	char SSN[40];
	char dob[10];
	char name[a];
	printf ("Type your full name:");
	fgets (name, a, stdin);
	if ((strlen(name) > 0) && (name[strlen(name) - 1] == '\n'))
    {
        name[strlen(name) - 1] = '\0';
    }
	printf ("Typer yout SSN:");
	scanf ("%s", SSN);
	printf ("Typer your birth date:");
	scanf ("%s", dob);
	printf ("\n The name you typed is: %s", name);
	printf ("\n The SSN you typed is: %s", SSN);
	printf ("\n The birth date you typed is: %s", dob);
	getch();
	return 0;
}
