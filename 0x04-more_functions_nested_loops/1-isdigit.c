/**
 * _isdigit - checks if the passed char is a number or not.
 * @c: Integer
 *
 * Return: 1 if it's a digit
 * 0 if not
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
