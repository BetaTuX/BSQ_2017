/*
** EPITECH PROJECT, 2017
** BSQ 2017
** File description:
** Finds the biggest square
*/

#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "my_printf.h"
#include "my.h"
#include "bsq.h"

int main(int argc, char **argv)
{
	int fd = 0;
	struct stat fstat;
	int *ans = 0;

	if (argc == 2 && (fd = open(argv[1], O_RDONLY)) != -1) {
		stat(argv[1], &fstat);
		ans = find_square(fd, fstat.st_size);
		free(ans);
		close(fd);
	} else if (argc != 2) {
		my_puterr("The program expects only 1 argument\n");
		return (84);
	} else {
		my_puterr("Failed to open the designated file\n");
		return (84);
	}
	return (0);
}