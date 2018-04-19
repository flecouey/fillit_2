/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strwleni.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 15:09:17 by flecouey          #+#    #+#             */
/*   Updated: 2017/11/23 15:09:24 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** - Retourne le nombre de caractères du mot situé à l'index i de la chaîne s.
** - Un mot est une suite de caractères délimitée par le caractère c et/ou le
** début/fin de chaîne.
*/

size_t	ft_strwleni(const char *s, char c, size_t i)
{
	size_t	wlen;

	wlen = 0;
	while (s[i] != (const char)c && s[i])
	{
		wlen++;
		i++;
	}
	return (wlen);
}
