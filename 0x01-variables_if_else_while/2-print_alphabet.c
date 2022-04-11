#include <stdio.h>
/**
* main - print alphabet in lowercase
*
* Description: using the main function
* use putchar
*/
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
