

/**
 * print_diagsums - print diagsum
 * @a: the array
 * @size: the size
 *
 * Return: Void
 */

void print_diagsums(int *a, int size)
{
	int i, j, i_cal = 0, j_cal = size, arr_length = (int)sizeof(a);

	int arr1;
	int arr2;

	for (i = 0; i < arr_length; i++)
	{
		for (j = 0; j < arr_length; j++)
		{
			if (i_cal == j)
			{
				arr1 += ((int **)a)[i][j];
			}

			if (j_cal == j)
			{
				arr2 += ((int **)a)[i][j];
			}
		}

		i_cal++;
		j_cal--;
	}
}
