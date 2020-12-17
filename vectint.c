/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   vectint.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pspijkst <pspijkst@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/16 16:54:47 by pspijkst      #+#    #+#                 */
/*   Updated: 2020/12/17 13:24:42 by pspijkst      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vector	*vectint_init(void)
{
	return (vector_init(sizeof(int)));
}

char		vectint_pushback(t_vector *vector, int value)
{
	return (vector_pushback(vector, (void*)&value));
}

int			vectint_getvalue(t_vector *vector, int index)
{
	return *(int*)vector_getvalue(vector, index);
}
