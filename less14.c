/* Character frequencies */

#include <stdio.h>


int main(void)
{
	int c;
	int i;
	int nchar[256];
	for (i = 0; i < 256; ++i)
		nchar[i] = 0;

	while ((c = getchar()) != EOF) 
	{
		if (c >= '0' && c < '255')
		++nchar[c-'0'];
	}

	printf("char array =");
	for (i = 0; i < 256; ++i)
		printf(" %d", nchar[i]);
		printf("\n");

	return 0;

} 


