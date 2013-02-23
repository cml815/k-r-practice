/* Exercise 1 - 2 K&R C Programming Language */

#include <stdio.h>

int main ()
/* temperature table with headings for fahrenheit and celsius */

{
	int fahr, celcius;
	int lower, upper, step;

	lower = 0; /* low limit of table */
	upper = 300; /* upper limit of table */
	step = 20; /* size of step */

	fahr = lower;
	printf("Fahrenheit to Celsius Conversion Table\n\n");
	printf("fahrenheit\tcelsius\n"); /* headings */ 
	while (fahr <= upper) {
		celcius = 5 * (fahr - 32) /9;
		printf("%d\t\t%d\n", fahr, celcius); /* tab to align header with data */
		fahr = fahr + step;
	}
}