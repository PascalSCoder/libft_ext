/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   vectstr.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pspijkst <pspijkst@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/17 15:10:34 by pspijkst      #+#    #+#                 */
/*   Updated: 2020/12/17 15:12:57 by pspijkst      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdio.h>

t_vector	*vectstr_init(void)
{
	return (vectptr_init());
}

char		*vectstr_getvalue(t_vector *vector, int index)
{
	return ((char*)vectptr_getvalue(vector, index));
}

char		vectstr_pushback(t_vector *vector, char *str)
{
	return (vectptr_pushback(vector, str));
}