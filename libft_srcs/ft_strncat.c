/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 14:33:09 by flecouey          #+#    #+#             */
/*   Updated: 2017/11/19 14:44:50 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t		len_s1;
	size_t		i;
	size_t		j;

	len_s1 = ft_strlen((const char*)s1);
	i = len_s1;
	j = 0;
	while (j < n && s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = 0;
	return (s1);
}
