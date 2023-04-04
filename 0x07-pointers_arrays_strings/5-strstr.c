#include"main.h"

/**
 * _strstr - substring location function.
 * @haystack: the string
 * @needle: the substring
 *
 * Return: to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		index = 0;
			if (haystack[index] == needle[index])
			{
				do {
					if (needle[index + 1] == '\0')
						return (haystack);
					index++;
				} while (haystack[index] == needle[index]);
	}
	haystack++;
}
return ('\0');

}
