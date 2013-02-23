// Histogram with word lengths

/*  Pseudo code 
set state
Get char
Decision - inword char, end of word
if end of word
assign to array
reset state
else get char
end of file
print array

*/

#include <stdio.h>
#define MAX_LENGTH 12 // word limited to 12 characters
#define IN 1
#define OUT 0

int main(void)

{
	int c;
	int i = 0;
	int j = 0;
	int state = IN; 
	int nc = 0;
	int wlen[MAX_LENGTH];  

	for (i = 0; i <= MAX_LENGTH; ++i)
		wlen[i] = 0;

	while ((c = getchar()) !=EOF) 
		{
			++nc;

			if (c == '\n' || c == ' ' || c == '\t') 
			{
				state = OUT;
				
			}
			
			if (state == OUT)
			{
				if (nc <= MAX_LENGTH)
						++wlen[nc];
			
				state = IN;
				nc = 0;
		
			}
		}

	/* Histogram - horizontal */
	printf("Histogram: Number of Words By Character Count\n");
		for( i=1; i <=MAX_LENGTH; ++i)
		{
		printf("%2d || ", i);
		for (j = 0; j < wlen[i]; ++j)
			putchar('*');
			putchar('\n');

		}

	return 0;
}


