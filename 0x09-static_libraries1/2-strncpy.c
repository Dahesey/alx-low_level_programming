/**
 * _strncpy - coppies string
 *
 * @dest: first string
 *
 * @src: second string
 *
 * @n: number of bytes
 *
 * Return: pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	while ((c < n) && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
