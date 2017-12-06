/*
** EPITECH PROJECT, 2017
** My own lib
** File description:
** A lib with all my functions
*/

#ifndef __MY_LIB__
#define __MY_LIB__

int unbrlen(unsigned int nb, char base);
int nbrlen(int nb);
char *convert_base(char const *nbr, char const *base_from, char const *base_to);
int my_find_prime_sup(int nb);
int my_getnbr_base(char const *str, char const *base);
int my_getnbr(char const *str);
int my_is_prime(int nb);
int my_isneg(int n);
int my_power(int nb, int p);
int my_putchar(char c);
int my_puterr(char *s);
int my_putnbr_base(int nb, char const *base);
int my_putunbr_base(unsigned int nb, char const *base);
int my_putnbr(int nb);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_show_word_array(char * const *tab);
int my_showmem(char const *str, int size);
int my_showstr(char const *str, int w_base);
void my_sort_int_array(int *array, int size);
int my_square_root(int nb);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char **my_str_to_word_array(char const *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int n);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strpick(char const *src, int start, int end);
char *my_strstr(char const *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);

#endif