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
	int ind;
	int size;
} bsq_result;

#endif /* !BSQ_H_ */
