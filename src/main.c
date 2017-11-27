/*
** EPITECH PROJECT, 2017
** 
** File description:
** 
*/

#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "my_printf.h"
#include "my.h"

int main(int argc, char **argv)
{
	int fd = 0;
	struct stat *fstat = 0;

	if (argc == 2 && (fd = open(argv[1], O_RDONLY) != -1)) {
		fstat = malloc(sizeof(*fstat));
		stat(argv[1], fstat);
		my_printf("%d\n", fstat->st_size);
		free(fstat);
	} else if (argc != 2) {
		my_printf("The program expects only 1 argument\n");
		return (84);
	} else {
		my_printf("Failed to open the designated file\n");
		return (84);
	}
	return (0);
}