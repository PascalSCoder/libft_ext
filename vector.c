/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   vector.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pspijkst <pspijkst@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/16 13:13:48 by pspijkst      #+#    #+#                 */
/*   Updated: 2020/12/17 14:24:07 by pspijkst      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "vector.h"
#include <stdio.h>

void		vector_free(t_vector *vector)
{
	if (vector->memb)
		free(vector->memb);
	free(vector);
}

t_vector	*vector_realloc(t_vector *vector)
{
	void	*new;

	vector->size = vector->size * 2;
	new = calloc(vector->size, vector->bytesize);
	if (new)
	{
		ft_memcpy(new, vector->memb, vector->nmemb * vector->bytesize);
		free(vector->memb);
		vector->memb = new;
		return (vector);
	}
	else
	{
		vector_free(vector);
		return (0);
	}
}

t_vector	*vector_init(char bytesize)
{
	t_vector	*vector;
	
	vector = calloc(1, sizeof(t_vector));
	if (!vector)
		return (0);
	vector->size = 1;
	vector->bytesize = bytesize;
	vector->memb = calloc(vector->size, vector->bytesize);
	if (!vector->memb)
	{
		free(vector);
		return (0);
	}
	return (vector);
}

char		vector_pushback(t_vector *vector, void *value)
{
	unsigned int	i;
	unsigned int	j;

	if (vector->nmemb >= vector->size)
		vector = vector_realloc(vector);
	if (!vector)
		return (0);
	i = 0;
	while (((char*)vector->memb)[i * vector->bytesize])
		i++;
	ft_memcpy(vector->memb + (i * vector->bytesize), value, vector->bytesize);
	vector->nmemb += 1;
	return (1);
}

void		*vector_getvalue(t_vector *vector, int index)
{
	return (vector->memb + (index * vector->bytesize));
}
