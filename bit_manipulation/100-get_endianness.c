/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int i;
	char *s;

	i = 1;
	s = (char *)&i;
	if (s)
		return (1);
	else
		return (0);
}
