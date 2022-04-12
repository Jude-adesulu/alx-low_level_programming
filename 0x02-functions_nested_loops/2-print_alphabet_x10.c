#include "main.h"
/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int i;
char alpha;

i = 10;
while (i < 10)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
i++;
_putchar('\n');
}
}
