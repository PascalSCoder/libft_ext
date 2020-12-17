/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   vectptr.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pspijkst <pspijkst@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/17 13:40:29 by pspijkst      #+#    #+#                 */
/*   Updated: 2020/12/17 14:59:11 by pspijkst      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdio.h>

char		vectptr_pushback(t_vector *vector, void *value)
{
	unsigned int	i;
	unsigned int	j;
	unsigned long long	addr;

	if (vector->nmemb >= vector->size)
		vector = vector_realloc(vector);
	if (!vector)
		return (0);
	i = 0;
	while (((char*)vector->memb)[i * vector->bytesize])
		i++;
	addr = (unsigned long long)value;
	ft_memcpy(vector->memb + (i * vector->bytesize), &addr, vector->bytesize);
	vector->nmemb += 1;
	return (1);
}

t_vector	*vectptr_init(void)
{
	return (vector_init(sizeof(void*)));
}

void		*vectptr_getvalue(t_vector *vector, int index)
{
	unsigned long long	*addr;

	addr = vector->memb + (index * vector->bytesize);
	return ((void*)*addr);
}
