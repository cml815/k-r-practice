/* Character frequencies */

#include <stdio.h>


int main(void)
{
	int c;
	int i;
	int j=0;
	int nchar[256];

	for (i = 0; i < 256; ++i)
		nchar[i] = 0;

	while ((c = getchar()) != EOF) 
	{
		if (c >= '0' && c < '255')
		++nchar[c-'0'];
	}

	printf("Histogram: Character Frequencies ");
		for( i= 0; i < 256; ++i)
		{
		printf("%2d || ", i);
		for (j = 0; j < nchar[i]; ++j)
			putchar('*');
			putchar('\n');
		}

	return 0;

} 


