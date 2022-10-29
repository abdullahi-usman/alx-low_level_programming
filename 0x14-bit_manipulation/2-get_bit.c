#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * __divide - divide a number
 * @n: the number
 * @reminder: the reminder
 *
 * Return: the divided
 */
int __divide(unsigned long int n, int *reminder)
{
    int r = n, c = 0;

    while (1)
    {
        if (r < 2)
        {
            *reminder = r;
            break;
        }
        r = r - 2;
        c++;
    }

    return (c);
}

/**
 * __print_binary - print binary number
 * @n: the number
 * @buf: the buffer
 * Return: void
 */
void __print_binary(unsigned long int n, char *buf)
{

    int x;

    if (n > 0)
        __print_binary(__divide(n, &x), buf);

    if (x == 1 || x == 0)
        buf[strlen(buf)] = (char)x;
}

/**
 * get_bit - get the bit at index
 * @n: the number
 * @index: the possition
 * Return: the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
    char *buf = (char *)malloc(sizeof(char) * 60);
    __print_binary(n, buf);

    if (strlen(buf) > index)
        return buf[strlen(buf) - index];

    return -1;
}