#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 for success
 */
int main(void)
{
int d;
d = 0;
while (d < 10)
{
putchar(d + '0');
d++;
}
putchar('\n');
return (0);
}
