/*
** EPITECH PROJECT, 2017
** CPE_BSQ
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

int *init_map(char *buff, int lin, int col)
{
	int *ans = malloc(lin * col * sizeof(int));

	for (int i = 0; i < lin; i++)
		for (int j = 0; j < col; j++)
			ans[j + (i * col)] = (buff[j + (i * col) + i] == '.');
	return (ans);
}

int lowest_three_val(int v1, int v2, int v3)
{
	if (v2 < v1 && v2 < v3)
		return (v2);
	else if (v3 < v1 && v3 < v2)
		return (v3);
	else
		return (v1);
}

void verify_bsq(int *ans, int ind, int lin, int col)
{
	if (ans[ind] == 0)
		return;
	ans[ind] = lowest_three_val(ans[ind + 1], ans[ind + col],\
ans[ind + 1 + col]);
	return;
}

int *find_square(int fd, int file_size)
{
	char *buff = malloc(file_size);
	int lin = 0;
	int col = 0;
	int map_beg = 0;
	int *ans = 0;

	read(fd, buff, file_size);
	lin = my_getnbr(buff);
	col = ((file_size - (nbrlen(lin) + 1)) - (lin - 1)) / lin;
	map_beg = nbrlen(lin) + 1;
	ans = init_map(&buff[map_beg], lin, col);
	my_printf("%d:%d\n", col, lin);
	for (int j = col - 2; 0 <= j; j--)
		for (int i = lin - 2; 0 <= i; i--)
			verify_bsq(&buff[map_beg], (i * col) + j, ans);
	free(buff);
	return (ans);
}