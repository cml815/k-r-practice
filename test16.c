#include <stdio.h>
#define MAXINLINE 1000 /* maximum input line size */
 
int getline(char line[], int MAXINLINE);
void copy(char to[], char from[]);
 
/* print longest input line */
int main(void)
{
 int len;               /* current line length */
 int max;               /* maximum length seen so far */
 char line[MAXINLINE];    /* current input line */
 char longest[MAXINLINE]; /* longest line saved here */
 
 max = 0;
 
 while((len = getline(line, MAXINLINE)) > 0)
 {
  printf("%d: %s", len, line);
 
  if(len > max)
  {
   max = len;
   copy(longest, line);
  }
 }
 if(max > 0)
 {
  printf("Longest LINE IN THE PROGRAM is %d characters:\n%s", max, longest);
 }
 printf("\n");
 return 0;
}
 
/* getline: read a line into s, return length */
int getline(char s[], int line)
{
 int c, i, j;
 
 for(i = 0, j = 0; (c = getchar())!=EOF && c != '\n'; ++i)
 {
  if(i < line - 1)
  {
   s[j++] = c;
  }
 }
 if(c == '\n')
 {
  if(i <= line - 1)
  {
   s[j++] = c;
  }
  ++i;
 }
 s[j] = '\0';
 return i;
}
 
/* copy: copy 'from' into 'to'; assume 'to' is big enough */
void copy(char to[], char from[])
{
 int k;
 
 k = 0;
 while((to[k] = from[k]) != '\0')
 {
  ++k;
 }
}