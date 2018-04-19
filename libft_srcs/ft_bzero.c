/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 12:07:55 by flecouey          #+#    #+#             */
/*   Updated: 2017/11/19 12:31:43 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*tmp_s;

	i = 0;
	tmp_s = (unsigned char*)s;
	while (i < n)
	{
		tmp_s[i] = 0;
		i++;
	}
}
