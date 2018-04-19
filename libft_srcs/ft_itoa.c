/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 12:37:48 by flecouey          #+#    #+#             */
/*   Updated: 2017/11/30 15:22:25 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_fillstr(char *str, int *div, int *mod)
{
	int		i;

	i = ft_npower(*div);
	if (*div == 0)
		str[0] = '0';
	while (*div)
	{
		ft_divmod(*div, 10, div, mod);
		str[i] = *mod + '0';
		i--;
	}
}

char		*ft_itoa(int n)
{
	int		*div;
	int		*mod;
	char	*str;

	if (!(div = ft_memalloc(sizeof(int) * 1)))
		return (NULL);
	if (!(mod = ft_memalloc(sizeof(int) * 1)))
		return (NULL);
	*div = n;
	if (!(str = ft_strnew(sizeof(char) * (ft_npower(n) + 1 + (n < 0 ? 1 : 0)))))
		return (NULL);
	if (n < 0)
	{
		if (n == -2147483648)
			ft_strcpy(str, "-2147483648");
		else
		{
			str[0] = '-';
			*div = -n;
			ft_fillstr(str + 1, div, mod);
		}
	}
	else
		ft_fillstr(str, div, mod);
	return (str);
}
