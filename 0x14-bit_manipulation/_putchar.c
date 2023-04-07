#include <unistd.h>
#include "main.h"

/**
 *  * _putchar - writes the character c to stdout
 *   * @cha: The character to print
 *    *
 *     * Return: On success 1.
 *      * On error, -1 is returned, and errno is set appropriately.
 *       */
int _putchar(char cha)
{
	return (write(1, &cha, 1));
}
