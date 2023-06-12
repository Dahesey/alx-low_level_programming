/**
 * _strncat - concatenate strings
 *
 * Author - dahesey
 *
 * @dest: first string
 *
 * @src: second string
 *
 * @n: number of bytes
 *
 * Return: pointer (char)
 */

char *_strncat(char *dest, char *src, int n)
{
	int y = 0;
	int x = 0;

	while (dest[y] != '\0')
		y++;
	while ((x < n) && *src != '\0')
	{
		dest[y] = *src;
		src++;
		y++;
		x++;
	}
	if (x < n)
		dest[y] = '\0';
	return (dest);
}
