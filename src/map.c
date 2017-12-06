/*
** EPITECH PROJECT, 2017
** BSQ 2017
** File description:
** Finds biggest square
*/

#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "my_printf.h"
#include "my.h"
#include "bsq.h"

static void process_diff(int item, int act_lin, int act_col, bsq_result *result)
{
	if (result->size < item) {
		result->lin = act_lin;
		result->col = act_col;
		result->size = item;
	}
}

void fill_buff(char *buff, bsq_result *ans, int lin, int col)
{
	if (ans == 0)
		return;
	for (int i = ans->lin; i < ans->lin + ans->size; i++)
		for (int j = ans->col; j < ans->col + ans->size; j++)
			buff[(i * col) + j + i] = 'x';
}

bsq_result *find_result(int *map, int lin, int col)
{
	bsq_result *ans = malloc(sizeof(bsq_result));

	ans->size = 0;
	ans->col = 0;
	ans->lin = 0;
	for (int j = 0; j < col; j++)
		for (int i = 0; i < lin; i++)
			process_diff(map[(i * col) + j], i, j, ans);
	return (ans);
}