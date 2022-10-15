#ifndef __VARIADIC_FUNCTIONS_H__
#define __VARIADIC_FUNCTIONS_H__

/**
 * sum_them_all - sum the numbers
 * @n: the number of number
 *
 * Return: Void
 */
int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - print the variadic arg number
 * @separator: the seperator between each number
 * @n: number of argument
 *
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...);
#endif