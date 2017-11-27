/*
** EPITECH PROJECT, 2017
** CPool_Day_2017
** File description:
** Allocates memory and copies the string given as argument in it
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(char const *src)
{
	char *ans = malloc(my_strlen(src) * sizeof(char));

	return (my_strcpy(ans, src));
}
