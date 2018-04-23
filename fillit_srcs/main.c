/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 22:23:44 by flecouey          #+#    #+#             */
/*   Updated: 2018/04/23 13:44:43 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_srcs/libft.h"
#include "fillit.h"

/*
** tab_input : chaque case du tableau contient un tetrimino forme par strsplit.
** tab_output : tableau de chaines de caracteres representant l'affichage final.
*/

int		main(int argc, char **argv)
{
	char	***tab_input;

	tab_input = NULL;
	if (argc != 2)
	{
		ft_putstr("usage : ./fillit input_file\n");
		return (0);
	}
	if (!(tab_input = ft_readfile(argv[1])) || !(ft_isvalid(tab_input)))
	{
		ft_putstr("error\n");
		return (0);
	}
	ft_fillit(tab_input);
	return (0);
}
