/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_npower.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 12:56:43 by flecouey          #+#    #+#             */
/*   Updated: 2017/11/30 11:24:48 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_npower(int n)
{
	int		*div;
	int		*mod;
	size_t	power;

	div = ft_memalloc(sizeof(int) * 1);
	mod = ft_memalloc(sizeof(int) * 1);
	if (n != -2147483648)
		*div = n > 0 ? n : -n;
	else
		return (9);
	if (n == 0)
		return (0);
	power = -1;
	while (*div)
	{
		ft_divmod(*div, 10, div, mod);
		power++;
	}
	return (power);
}
