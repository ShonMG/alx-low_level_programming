/**
 * _memset - fills the first n bytes of the memory
 * area pointed to by s with constant byte b
 *
 * Return: a pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		s[c] = b;
	return (s);
}
