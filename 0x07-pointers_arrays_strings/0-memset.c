/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * @s: pointer
 * @b: constant byte b
 * @n:  bytes of the memory area 
 * Returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;
	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}