/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 18:40:35 by flecouey          #+#    #+#             */
/*   Updated: 2017/11/17 19:02:19 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
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
		i++;
	}
	return (dst);
}
