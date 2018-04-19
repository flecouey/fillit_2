/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strwcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 12:30:36 by flecouey          #+#    #+#             */
/*   Updated: 2017/11/23 15:00:21 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** - Retourne le nombre de mots dans la chaîne s.
** - Un mot est une suite de caractères délimitée par le caractère c et/ou le
** début/fin de chaîne.
*/

size_t	ft_strwcount(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == (const char)c && s[i])
			i++;
		while (s[i] != (const char)c && s[i])
			i++;
		if (s[i - 1] != (const char)c && i > 0)
			count++;
	}
	return (count);
}
