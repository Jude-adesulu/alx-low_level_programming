#include "main.h"

/**
 * _strncat -  cat two strings together
 *
 *@dest: string that will be appended to
 *@src: it will append to dest strong
 *
 * Return: return a dest string
 */

char *_strncat(char *dest, char *src)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
i++;
}

while (src[j] != '\0')
{
*(dest + i) = s[j];
j++;
i++;
}
*(dest + i) = '\0';

return (dest);
}
