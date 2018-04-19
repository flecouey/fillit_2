/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 00:02:33 by flecouey          #+#    #+#             */
/*   Updated: 2017/11/30 13:32:26 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t	n;
	char	**tab;
	size_t	windex;
	size_t	wlen;

	n = 0;
	if (!s)
		return (NULL);
	if (!(tab = (char**)malloc(sizeof(char*) * (ft_strwcount(s, c) + 1))))
		return (NULL);
	while (n < ft_strwcount(s, c))
	{
		windex = ft_strwindex(s, c, n);
		wlen = ft_strwlenn(s, c, n);
		tab[n] = ft_strsub(s, windex, wlen);
		n++;
	}
	tab[n] = 0;
	return (tab);
}
