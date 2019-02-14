/**
 * _isupper - Function that checks for uppercase character
 * @c: Character to check
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if ((c <= 90) && (c >= 65))
		return (1);
	return (0);
}
