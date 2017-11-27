/*
** EPITECH PROJECT, 2017
** bootstrap my_printf
** File description:
** same behavior as printf
*/

#include <stdarg.h>
#include <stdlib.h>
#include "my.h"
#include "my_printf.h"

int pf_c(va_list vl, char *flags)
{
	char c = va_arg(vl, int);

	free(flags);
	if (c != 0) {
		my_putchar(c);
		return (1);
	} else {
		return (0);
	}
}

int pf_s(va_list vl, char *flags)
{
	char *s = va_arg(vl, char *);
	int flag_ans = 0;

	if (0 < my_strlen(flags)) {
		flag_ans = offset_sflag(s, flags);
	}
	free(flags);
	if (s != 0 && flag_ans == 0) {
		my_putstr(s);
		return (my_strlen(s));
	} else {
		return (flag_ans);
	}
}

int pf_S(va_list vl, char *flags)
{
	char *s = va_arg(vl, char *);
	int char_lim = my_strlen(s);
	char *tmp_s;

	if (0 < my_strlen(flags)) {
		tmp_s = my_strpick(flags, 1, my_strlen(flags));
		char_lim = my_getnbr(tmp_s);
		free(tmp_s);
	}
	free(flags);
	if (s != 0) {
		tmp_s = my_strpick(s, 0, char_lim);
		char_lim = my_showstr(tmp_s, 0);
		free(tmp_s);
		return (char_lim);
	} else {
		return (0);
	}
}

int pf_mod(va_list vl, char *flags)
{
	(void)vl;
	free(flags);

	my_putchar('%');
	return (1);
}