#include <stdio.h>

main ()
/* temperature table  */

{
	float fahr, celcius;
	int lower, upper, step;

	lower = 0; /* low limit of table */
	upper = 300; /* upper limit of table */
	step = 20; /* size of step */

	fahr = upper;
	printf("Fahrenheit to Celsius Conversion Table\n\n");
	printf("Fahr\t Cel\n"); /* headings */ 
	while (fahr >= lower) {
		celcius = 5 * (fahr - 32) /9;
		printf("%3.0f\t%6.1f\n", fahr, celcius); /* tab to align header with data */
		fahr = fahr - step;
	}
}