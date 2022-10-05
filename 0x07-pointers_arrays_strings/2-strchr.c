/**
 * _strchr - locates a character in a string
 *
 * Return: pointer to first character c in string s or Null if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s+1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
