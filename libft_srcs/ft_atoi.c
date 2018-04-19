/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 16:04:14 by flecouey          #+#    #+#             */
/*   Updated: 2017/12/04 12:01:31 by Felix            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	size_t		i;
	int			signe;
	int			rt;

	i = 0;
	signe = 1;
	rt = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
		signe = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!ft_isdigit(str[i]))
		return (0);
	while (str[i] && ft_isdigit(str[i]))
	{
		rt = rt * 10 + str[i] - '0';
		i++;
	}
	return (rt * signe);
}
