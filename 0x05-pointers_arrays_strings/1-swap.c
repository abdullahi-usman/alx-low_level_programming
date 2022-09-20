/**
 * swap_int - swap
 * @a: first pointer
 * @b: second pointer
 *
 * Returns: Void
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
