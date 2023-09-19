/**
 * _pow - raises a number to a power
 * @a: base number
 * @b: power to raise the base/number to. (a ^ b)
 * Return: the result of a raised to the power b.
 */
unsigned int _pow(unsigned int a, unsigned int b)
{
	return ((a == 1) ? a : ((b == 0) ? 1 : a * _pow(a, b - 1)));
}

/**
 * _strlen - gets the lenght of a string
 * @s: the passed string
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int i = 0;

	for (; s[i]; i++)
		;
	return (i);
}

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to a string of 0 and 1 chars to be converted
 * Return: converted num or 0 if there is one or more chars in
 * the string b that is not 0 or 1 of if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i, bits, len, bin = 0;

	if (!b)
		return (0);

	len = _strlen(b);
	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		bits = b[i] - '0';
		bin += bits * _pow(2, (len - 1) - i);
	}
	return (bin);
}
