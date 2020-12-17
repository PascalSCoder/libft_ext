/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pspijkst <pspijkst@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/16 16:50:38 by pspijkst      #+#    #+#                 */
/*   Updated: 2020/12/17 15:32:11 by pspijkst      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdio.h>

static void	test_vectchar(void)
{
	t_vector	*vectchar;

	vectchar = vectchar_init();
	vectchar_pushback(vectchar, 'a');
	vectchar_pushback(vectchar, 'b');
	vectchar_pushback(vectchar, 'c');
	printf("%c\n", vectchar_getvalue(vectchar, 0));
	printf("%c\n", vectchar_getvalue(vectchar, 1));
	printf("%c\n", vectchar_getvalue(vectchar, 2));
	vector_free(vectchar);
}

static void	test_vectint(void)
{
	t_vector	*vectint;

	vectint = vectint_init();
	vectint_pushback(vectint, 5678);
	vectint_pushback(vectint, 1298);
	vectint_pushback(vectint, 1649);
	printf("%d\n", vectint_getvalue(vectint, 0));
	printf("%d\n", vectint_getvalue(vectint, 1));
	printf("%d\n", vectint_getvalue(vectint, 2));
	vector_free(vectint);
}

static void	test_vectptr(void)
{
	t_vector	*vectptr;
	int			h;
	int			i;
	int			j;

	vectptr = vectptr_init();
	h = 9;
	i = 8;
	j = 7;
	vectptr_pushback(vectptr, &h);
	h = 3;
	vectptr_pushback(vectptr, &i);
	vectptr_pushback(vectptr, &j);
	printf("p: %p\n", vectptr_getvalue(vectptr, 0));
	// printf("d: %d\n", *(int*)vectptr_getvalue(vectptr, 0));
	printf("original p: %p\n", &h);
	// printf("original d: %d\n", h);
	printf("%p\n", vectptr_getvalue(vectptr, 1));
	printf("original p: %p\n", &i);
	printf("%p\n", vectptr_getvalue(vectptr, 2));
	printf("original p: %p\n", &j);
	vector_free(vectptr);
}

static void	test_vectstr(void)
{
	t_vector	*vectstr;

	vectstr = vectstr_init();
	vectstr_pushback(vectstr, "Hello world!");
	vectstr_pushback(vectstr, "Hola mundo!");
	vectstr_pushback(vectstr, "Hallo wereld!");
	printf("0: %s\n", vectstr_getvalue(vectstr, 0));
	printf("1: %s\n", vectstr_getvalue(vectstr, 1));
	printf("2: %s\n", vectstr_getvalue(vectstr, 2));
	vector_free(vectstr);
}

int		main(void)
{
	test_vectstr();
	test_vectptr();
}
