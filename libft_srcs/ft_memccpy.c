/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 12:27:40 by flecouey          #+#    #+#             */
/*   Updated: 2017/11/18 13:16:17 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*dst_tmp;
	unsigned char	*src_tmp;

	i = 0;
	dst_tmp = (unsigned char*)dst;
	src_tmp = (unsigned char*)src;
	while (i < n)
	{
		dst_tmp[i] = src_tmp[i];
		if (src_tmp[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
