// Histogram with word lengths

/*  Pseudo code 
Get char
count
check if end of word
assign to array
assign to other
print array

*/

#include <stdio.h>

// #define IN 1 //inside a word
// #define OUT 0 //outside a word

// Horizontal histogram words up to 10 letters

int main(void)

{
	int c, i, nspace, nother;
	int freqlen[10];

	for (i = 0; i < 10; ++i)
		freqlen[i] = 0;

	while ((c=getchar()) !=EOF)
		if (c != '\n' || c != ' ' || c != '\t')
			++lword[c-'0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nspace;
		else
			++nother;

		printf("digits = ");
		for (i = 0; i < 10; ++i)
			printf(" %d", freqlen[i]);
		printf(" white space = %d, other = %d\n", nspace, nother);
		
}


