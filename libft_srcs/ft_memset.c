/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 16:26:42 by flecouey          #+#    #+#             */
/*   Updated: 2017/11/17 18:51:54 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*mem;

	i = 0;
	mem = (unsigned char *)s;
	while (i < len)
	{
		mem[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
