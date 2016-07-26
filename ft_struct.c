/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <jledieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 14:43:27 by jledieu           #+#    #+#             */
/*   Updated: 2016/02/20 22:27:47 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_nb	*ft_struct(int argc)
{
	t_nb	*nb;
	int		i;

	i = 1;
	if ((nb = (t_nb *)malloc(sizeof(t_nb))))
	{
		nb->nba = argc - 1;
		nb->nbb = 0;
		nb->nbinj[0] = nb->nba;
		while (i < nb->nba)
		{
			nb->nbinj[i] = 0;
			i++;
		}
		nb->i = 1;
		nb->nbstart = argc - 1;
		nb->opt = 0;
		nb->opta = 0;
		nb->optc = 0;
		nb->optl = 0;
		nb->opts = 0;
		nb->optnu = 0;
		nb->optn = 0;
	}
	return (nb);
}
