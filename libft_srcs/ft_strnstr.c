/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 15:02:24 by flecouey          #+#    #+#             */
/*   Updated: 2017/11/22 16:09:32 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	len_needle;

	i = 0;
	len_needle = ft_strlen(needle);
	if (!(needle[0]))
		return ((char*)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0] && len_needle <= len - i)
		{
			if (ft_strncmp(haystack + i, needle, len_needle) == 0)
				return ((char*)haystack + i);
		}
		i++;
	}
	return (NULL);
}
