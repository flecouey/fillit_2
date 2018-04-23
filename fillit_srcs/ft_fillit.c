/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 23:22:24 by flecouey          #+#    #+#             */
/*   Updated: 2018/04/23 14:10:08 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_srcs/libft.h"
#include "fillit.h"

static int	ft_solver(char ***tab_input, char ***tab_output, t_params params)
{
	params.j = 0;
	if (params.i == params.nb_tetri)
	{
		return (1);
	}
	while (params.j < params.min_square)
	{
		params.k = 0;
		while (params.k < params.min_square)
		{
			if (ft_issafe(tab_input, *tab_output, params))
			{
				*tab_output = ft_placepiece(tab_input, *tab_output, params);
				params.i++;
				if (ft_solver(tab_input, tab_output, params))
					return (1);
				params.i--;
				*tab_output = ft_removepiece(tab_input, *tab_output, params);
			}
			params.k++;
		}
		params.j++;
	}
	return (0);
}

void		ft_fillit(char ***tab_input)
{
	char		***tab_output;
	char		**temp;
	t_params	params;

	temp = ft_taballoc();
	tab_output = &temp;
	params.nb_tetri = ft_nbtetri(tab_input);
	params.min_square = ft_nextsquare(params.nb_tetri * 4);
	params.i = 0;
	params.j = 0;
	params.k = 0;
	while (params.min_square < SIZE)
	{
		if (ft_solver(tab_input, tab_output, params))
		{
			ft_printoutput(*tab_output, params.min_square);
			return ;
		}
		params.min_square++;
	}
	return ;
}
