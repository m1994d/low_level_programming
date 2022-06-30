#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: Pointer to pointer to string in which the change is made
 * @to: Pointer to change
 */

void set_string(char **s, char *to)
{
	*s = to;
}
