/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 12:33:45 by flecouey          #+#    #+#             */
/*   Updated: 2017/11/19 14:31:35 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t		len_s1;
	size_t		len_s2;
	size_t		i;
	size_t		j;

	len_s1 = ft_strlen((const char*)s1);
	len_s2 = ft_strlen(s2);
	i = len_s1;
	j = 0;
	while (j <= len_s2)
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	return (s1);
}
