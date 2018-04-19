/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 16:40:40 by flecouey          #+#    #+#             */
/*   Updated: 2017/11/17 17:36:58 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned long	i;
	unsigned char	*mem;

	i = 0;
	if (!(mem = malloc(sizeof(char) * size)))
		return (NULL);
	while (i < size)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
