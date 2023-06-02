/**
 * _strcmp -  Compares two string
 *
 * Author -Dahesey
 *
 * @S1: first string
 *
 * @s2: second string
 *
 * Return: (0) if same else return the difference
 */

int _strcmp(char *s1, char *s2)
{
	int c = 0;

	while (s1[c] != '\0' && s2[c] != '\0')
	{
		if ((s1[c] - s2[c]) != 0)
			return (s1[c] - s2[c]);
		c++;
	}
	return (0);
}		
