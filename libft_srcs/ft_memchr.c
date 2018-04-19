/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 14:13:23 by flecouey          #+#    #+#             */
/*   Updated: 2017/11/29 16:40:09 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*tmp_s;

	i = 0;
	tmp_s = (unsigned char*)s;
	while (i < n)
	{
		if (tmp_s[i] == (unsigned char)c)
			return ((void*)s + i);
		i++;
	}
	return (NULL);
}
