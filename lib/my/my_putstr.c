/*
** EPITECH PROJECT, 2017
** CPool_Day04_2017
** File description:
** Displays, one-by-one, the characters of a string
*/

#include <unistd.h>
#include "my.h"

int my_putstr(char const *str)
{
	int len = my_strlen(str);

	write(1, str, len);
	return (len);
}
