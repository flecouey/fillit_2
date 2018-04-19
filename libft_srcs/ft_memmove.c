/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 13:33:14 by flecouey          #+#    #+#             */
/*   Updated: 2017/11/30 15:13:50 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	unsigned char	*dst_tmp;
	unsigned char	*src_tmp;

	dst_tmp = (unsigned char*)dst;
	src_tmp = (unsigned char*)src;
	if (dst > src && src + len >= dst)
	{
		i = len;
		while (i > 0)
		{
			dst_tmp[i - 1] = src_tmp[i - 1];
			i--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
