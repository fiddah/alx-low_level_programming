#include <stdlib.h>
#include <time.h>
/*more headers goes there */
/*betty style doc for function main goes there */
/**
 * main - prints the last digit of the random
 * number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is %d ", n);
/* your code goes there */
if (n > 5)
{
printf("%d and is greater than 5\n", n);
}
else if (n == 0)
{
printf("%d and is 0\n", n);
}
else if (n < 6 && n != 0)
{
printf("%d and is less than 6 and not 0/n", n);
}
return (0);
}
