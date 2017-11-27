/*
** EPITECH PROJECT, 2017
** CPool_DAY11
** File description:
** prototypes of every fx of the day
*/

#ifndef __DAYH__
#define __DAYH__

int my_apply_on_nodes(linked_list_t *begin, int (*f)(void *));
void push(linked_list_t **list, void *elem);
int my_list_size(linked_list_t const *begin);
int my_rev_list(linked_list_t const **list);

#endif
