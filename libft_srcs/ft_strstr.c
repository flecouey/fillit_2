/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 14:02:49 by flecouey          #+#    #+#             */
/*   Updated: 2017/11/29 12:19:46 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	len_needle;

	i = 0;
	len_needle = ft_strlen(needle);
	if (!(needle[0]))
		return ((char*)haystack);
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			if (ft_strncmp(haystack + i, needle, len_needle) == 0)
				return ((char*)haystack + i);
		}
		i++;
	}
	return (NULL);
}
