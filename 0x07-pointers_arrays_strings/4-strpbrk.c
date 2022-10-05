/**
 * _strpbrk - locate first occurrence in string s of any bytes in 
 * string accept
 *
 * Return: pointer to byte in s that matches one of bytes in accept
 * or Null if not found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a;

	while (*s != '\0')
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return (0);
}
