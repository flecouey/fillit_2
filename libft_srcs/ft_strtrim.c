/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 22:40:50 by flecouey          #+#    #+#             */
/*   Updated: 2017/11/30 13:35:15 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t		i;
	size_t		j;
	size_t		len_dst;
	char		*dst;

	i = 0;
	if (!s)
		return (NULL);
	j = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i++;
	}
	while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && j > i)
	{
		j--;
	}
	len_dst = j - i + 1;
	if (!(dst = ft_strsub(s, i, len_dst)))
		return (NULL);
	dst[len_dst] = 0;
	return (dst);
}
