/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printoutput.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 23:11:34 by flecouey          #+#    #+#             */
/*   Updated: 2018/03/30 17:37:30 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_srcs/libft.h"
#include "fillit.h"

void	ft_printoutput(char **tab_output)
{
	int		j;
	int		min_square;

	j = 0;
	while (!(ft_isdigit(tab_output[0][j])))
		j++;
	min_square = ft_atoi(&tab_output[0][j]);
	j = 0;
	while (j < min_square)
	{
		ft_putnstr(tab_output[j], (size_t)min_square);
		ft_putchar('\n');
		j++;
	}
}
