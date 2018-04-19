/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 22:20:28 by flecouey          #+#    #+#             */
/*   Updated: 2017/11/30 13:31:22 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dst;

	i = 0;
	if (!s)
		return (NULL);
	if (!(dst = ft_strnew(len)))
		return (NULL);
	while (i < len)
	{
		dst[i] = (const char)s[start + i];
		i++;
	}
	return (dst);
}
