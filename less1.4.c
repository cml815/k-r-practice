/* EX 8 #include <stdio.h>

int main()

/* program to count blanks, tabs, newlines 

{

	
	int c, bl, t, nl; /* char, blank spaces, tabs, newlines  

	bl = t = nl = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++bl;
		if (c == '\n')
			++nl;
		if (c == '\t')
			++t;
	}
	printf("spc\tline\ttabs\n");
	printf("%d\t%d\t%d", bl, nl, t);


}

*/

/* EX 9 replace multiple blanks with one blank


#include <stdio.h>

int main()

{

	int c, b; /* character, before-space  

	b = EOF;
	
	while ((c = getchar()) != EOF) {
		if (c == ' ') 
		if (b != ' ')
			putchar(c);
		if (c != ' ' )
				putchar(c);
		b = c;
		
	}
		return 0;
}
			
*/

/* EX 10 input to output replace tab, backspace and backslash 

#include <stdio.h>

int main ()

{
	int c, t, bsl, bsp; // char, tab, backslash, backspace

	while ((c = getchar()) != EOF) {
		if (c == '\t')
			printf("\\t");
		if (c == '\\')
			printf("\\");
		if (c == '\b')
			printf("\\b");
		if (c !='\t')
			putchar(c);
		
	}
		return 0;
}

*/

// EX 11 test word count program

// EX 12 write a program that prints its input one word per line

#include <stdio.h>

#define IN 1 	// part of word
#define OUT 0 	// outside of word

int main()

{ 

int c;

while ((c = getchar()) != EOF)
	if (c == ' ' || c == '\n' || c =='\t')
		printf("\n");
	else 
		putchar(c);

}
















