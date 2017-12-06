/*
** EPITECH PROJECT, 2017
** BSQ 2017
** File description:
** BSQ Header
*/

#ifndef BSQ_H_
#define BSQ_H_

#define IS_EOF(val) val == 0
#define IS_RET(val) val == '\n'
#define IS_EOL(val) val == '\n' || val == 0
#define IS_CHR(val, chr) val == chr

typedef struct {
	int lin;
	int col;
	int size;
} bsq_result;

bsq_result *find_result(int *map, int lin, int col);
int *find_square(int fd, int file_size);
void display_bsq(int *map, char *buff, int lin, int col);
int lowest_three_val(int v1, int v2, int v3);
int *init_map(char *buff, int lin, int col);
void fill_buff(char *buff, bsq_result *ans, int col);
void verify_bsq(int *ans, int ind, int col);

#endif
