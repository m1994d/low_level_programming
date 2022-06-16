/**
 * _islower - checks for lowercase character.
 * @c: To prove
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
