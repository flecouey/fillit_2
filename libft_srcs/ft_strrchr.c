/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 13:57:58 by flecouey          #+#    #+#             */
/*   Updated: 2017/11/22 14:02:14 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	if (c == 0)
		return ((char*)s + i);
	while (i >= 0)
	{
		if ((char)s[i] == (char)c)
			return ((char*)s + i);
		i--;
	}
	return (NULL);
}
