/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 15:45:03 by flecouey          #+#    #+#             */
/*   Updated: 2017/11/19 12:31:15 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t		len_s1;
	char		*s2;

	len_s1 = ft_strlen(s1);
	if (!(s2 = (char*)ft_memalloc(len_s1 + 1)))
		return (NULL);
	ft_strcpy(s2, s1);
	return (s2);
}
