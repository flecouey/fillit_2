/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_taballoc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 19:46:44 by flecouey          #+#    #+#             */
/*   Updated: 2018/04/01 16:07:52 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_srcs/libft.h"
#include "fillit.h"

char	**ft_taballoc(void)
{
	int		j;
	int		k;
	char	**tab_output;

	j = 0;
	tab_output = NULL;
	if (!(tab_output = ft_memalloc(sizeof(char*) * (SIZE + 1))))
		return (NULL);
	while (j < (SIZE))
	{
		if (!(tab_output[j] = ft_memalloc(sizeof(char) * (SIZE + 1))))
			return (NULL);
		k = 0;
		while (k < SIZE)
		{
			tab_output[j][k] = '.';
			k++;
		}
		j++;
	}
	return (tab_output);
}
