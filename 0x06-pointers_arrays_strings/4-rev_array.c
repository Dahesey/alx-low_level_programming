/**
 * reverse_array - Reverses an array of integers
 *
 * Author - dahesey
 *
 * @a: first integer
 *
 * @n: second integer
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int hold = a[i];

		a[i] = a[n - i - 1];
		a[n - i - 1] = hold;
	}
}
