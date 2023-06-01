/**
 * _strcat - Add first string to second string
 *
 * Author - Dahesey
 *
 * @dest: first string
 *
 * @src: second string
 *
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	int t = 0;

	while (dest[t] != '\0')
	{
		t++;
	}
	while (*src != '\0')
	{
		dest[t] = *src;
		src++;
		t++;
	}
	dest[t] = '\0';
	return (dest);
}
