

/**
 * print_name - call the function to print name
 * @name:  the function name
 * @f: the function
 *
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
