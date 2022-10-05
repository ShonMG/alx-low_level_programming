/**
 * _strstr - finds the first occurrence of substring needle in string  haystack
 *
 * Return; pointer to beginning of located substring or Null if not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int length;

	length = 0;
	while (needle[length] != '\0')
		length++;
	while (*haystack != '\0')
	{
		if (_strncmp(haystack, needle, length) == 0)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
