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

int lowest_three_val(int v1, int v2, int v3)
{
	if ((v2 <= v1 && v1 <= v3) || (v2 <= v3 && v3 <= v1))
		return (v2);
	else if ((v3 <= v1 && v1 <= v2) || (v3 <= v2 && v2 <= v1))
		return (v3);
	else
		return (v1);
}

void verify_bsq(int *ans, int ind, int col)
{
	if (ans[ind] == 0)
		return;
	ans[ind] = lowest_three_val(ans[ind + 1], ans[ind + col],\
ans[ind + 1 + col]) + 1;
	return;
}

void execute_bsq(int *arr, int lin, int col)
{
	int i = lin - 2;
	int j = col - 2;

	if (lin <= 1 || col <= 1)
		return;
	while (!(i <= 0 && j <= 0)) {
		for (int ite = i; 0 <= ite; ite--)
			verify_bsq(arr, (ite * col) + j, col);
		for (int ite = j; 0 <= ite; ite--)
			verify_bsq(arr, (i * col) + ite, col);
		i -= (i != 0);
		j -= (j != 0);
	}
}

void display_bsq(int *map, char *buff, int lin, int col)
{
	bsq_result *ans = find_result(map, lin, col);

	fill_buff(buff, ans, col);
	my_putstr(buff);
	free(ans);
}

int *find_square(int fd, int file_size)
{
	char *buff = malloc((file_size) * sizeof(char));
	int lin = 0;
	int col = 0;
	int map_beg = 0;
	int *ans = 0;

	read(fd, buff, file_size - 1);
	if (buff == 0)
		return (0);
	lin = my_getnbr(buff);
	col = ((file_size - (nbrlen(lin) + 1)) - (lin - 1)) / lin;
	map_beg = nbrlen(lin) + 1;
	ans = init_map(&buff[map_beg], lin, col);
	execute_bsq(ans, lin, col);
	display_bsq(ans, &buff[map_beg], lin, col);
	my_putchar('\n');
	free(buff);
	return (ans);
}