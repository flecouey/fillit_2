/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strwlenn.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 15:10:12 by flecouey          #+#    #+#             */
/*   Updated: 2017/11/29 15:04:00 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** - Retourne le nombre de caractères du mot n° n dans la chaîne s.
** - Le premier mot est le mot n° 0.
** - Un mot est une suite de caractères délimitée par le caractère c et/ou le
** début/fin de chaîne.
*/

size_t	ft_strwlenn(const char *s, char c, size_t n)
{
	size_t	index;

	index = ft_strwindex(s, c, n);
	return (ft_strwleni(s, c, index));
}
