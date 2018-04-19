/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strwindex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 15:33:09 by flecouey          #+#    #+#             */
/*   Updated: 2017/11/23 15:33:16 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** - Retourne la position dans la chaîne s du mot n° n, ou 0 en cas d'erreur.
** - Le premier mot est le mot n° 0.
** - Un mot est une suite de caractères délimitée par le caractère c et/ou le
** début/fin de chaîne.
*/

size_t	ft_strwindex(const char *s, char c, size_t n)
{
	size_t	i;
	size_t	index;
	size_t	wcount;

	i = 0;
	index = 0;
	wcount = 0;
	if (n >= ft_strwcount(s, c) || ft_strwcount(s, c) == 0)
		return (0);
	while (wcount <= n)
	{
		while (s[i] == (const char)c && s[i])
			i++;
		index = i;
		while (s[i] != (const char)c && s[i])
			i++;
		if (s[i - 1] != (const char)c && i > 0)
			wcount++;
	}
	return (index);
}
