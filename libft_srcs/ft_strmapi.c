/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 17:04:45 by flecouey          #+#    #+#             */
/*   Updated: 2017/11/30 13:29:06 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*map;

	i = 0;
	if (!s || !f)
		return (NULL);
	if (!(map = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[i])
	{
		map[i] = f(i, (char)s[i]);
		i++;
	}
	return (map);
}
