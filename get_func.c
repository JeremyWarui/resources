#include "headerfile.h"

/**
 * get_func - search for a function that match the symbol
 * @s: array to check for symbol
 * Return: return the function that matches the "s"
 */

int (*get_func(char s))(va_list)
{
	format_t funcs[] = {
		{"s", print_s},
		{"c", print_c},
		{"d", print_int},
		{"i", print_i},
		{"b", print_binary},
		{"o", print_octal},
		{"u", print_unint},
		{"X", print_hex},
		{"x", print_hexlow}
	};
	int i;

	for (i = 0; funcs[i].symbol != NULL; i++)
	{
		if (*funcs[i].symbol == s)
			return (funcs[i].func);

	}
	return (NULL);
}
