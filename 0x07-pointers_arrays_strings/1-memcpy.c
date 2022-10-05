/**
 * _memcpy - copy n bytes from memory area src to memory area dest
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *dest, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
