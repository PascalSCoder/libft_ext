/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   vector.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pspijkst <pspijkst@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/16 13:28:29 by pspijkst      #+#    #+#                 */
/*   Updated: 2020/12/17 14:30:27 by pspijkst      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTORS_H
# define VECTORS_H

#include <stddef.h>

typedef struct	s_vector
{
	void			*memb;
	char			bytesize;
	unsigned long	nmemb;
	unsigned long	size;
}				t_vector;

typedef struct	s_vectint
{
	t_vector	*vector;
}				t_vectint;

void		*ft_memcpy(void *dest, const void *src, size_t n);

void		vector_free(t_vector *vector);
t_vector	*vector_realloc(t_vector *vector);

t_vector	*vector_init(char bytesize);
void		*vector_getvalue(t_vector *vector, int index);
char		vector_pushback(t_vector *vector, void *value);

t_vector	*vectint_init(void);
int			vectint_getvalue(t_vector *vector, int index);
char		vectint_pushback(t_vector *vector, int value);

t_vector	*vectchar_init(void);
char		vectchar_getvalue(t_vector *vector, int index);
char		vectchar_pushback(t_vector *vector, char value);

t_vector	*vectptr_init(void);
void		*vectptr_getvalue(t_vector *vector, int index);
char		vectptr_pushback(t_vector *vector, void *value);

#endif
