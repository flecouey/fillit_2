/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printoutput.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 23:11:34 by flecouey          #+#    #+#             */
/*   Updated: 2018/04/23 13:43:57 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_srcs/libft.h"
#include "fillit.h"

void	ft_printoutput(char **tab_output, int min_square)
{
	int		j;
	
	j = 0;
	while (j < min_square)
	{
		ft_putnstr(tab_output[j], (size_t)min_square);
		ft_putchar('\n');
		j++;
	}
}
