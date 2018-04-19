/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 14:35:11 by flecouey          #+#    #+#             */
/*   Updated: 2017/11/18 15:43:35 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;

	i = 0;
	tmp_s1 = (unsigned char*)s1;
	tmp_s2 = (unsigned char*)s2;
	while (i < n)
	{
		if (tmp_s1[i] - tmp_s2[i])
			return (tmp_s1[i] - tmp_s2[i]);
		i++;
	}
	return (0);
}
