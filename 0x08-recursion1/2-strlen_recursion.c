/**
 * _strlen_recursion - calculates the length of a string
 *
 * Author - Dahesey
 *
 * @s: char string
 *
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	char *y = s;

	if (!*y)
		return (0);
	else
		return (1 + _strlen_recursion(y + 1));
}
