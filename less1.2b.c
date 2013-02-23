#include <stdio.h>

main ()
/* celisus to fahrenheit conversion table with headers */

{
	float fahr, celsius;
	int lower, upper, step;

	lower = -20; /* low limit of table */
	upper = 150; /* upper limit of table */
	step = 10; /* size of step 10 degrees C */

	celsius = lower;
	printf("Table: Celsius to Fahrenheit conversions\n\n"); /*table head */
	printf("Cel\tFahr\n-------------\n"); /* headings */ 
	while (celsius <= upper) {
		fahr = (celsius * 9.0/5.0) + 32;
		printf("%3.0f\t%6.1f\n", celsius, fahr); 
		celsius = celsius + step;
	}

}