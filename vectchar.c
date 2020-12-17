/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   vectchar.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pspijkst <pspijkst@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/17 13:11:25 by pspijkst      #+#    #+#                 */
/*   Updated: 2020/12/17 13:24:45 by pspijkst      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vector	*vectchar_init(void)
{
	return (vector_init(sizeof(char)));
}

char		vectchar_pushback(t_vector *vector, char value)
{
	return (vector_pushback(vector, (void*)&value));
}

char		vectchar_getvalue(t_vector *vector, int index)
{
	return *(char*)vector_getvalue(vector, index);
}
