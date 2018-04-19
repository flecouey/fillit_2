/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 16:54:09 by flecouey          #+#    #+#             */
/*   Updated: 2017/11/30 13:26:43 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*map;

	i = 0;
	if (!s)
		return (NULL);
	if (!(map = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[i])
	{
		map[i] = f((char)s[i]);
		i++;
	}
	return (map);
}
