/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algofusion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <jledieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 19:47:30 by jledieu           #+#    #+#             */
/*   Updated: 2016/02/20 22:44:13 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_nba2(int middle, t_nb *nb, int list_a[nb->nba], int list_b[nb->nbb])
{
	if (nb->nba == 2)
	{
		if (list_a[nb->nba - 1] > list_a[nb->nba - 2])
			ft_sa(nb, list_a, list_b);
		return ;
	}
	while (ft_find_inf_middlenb(nb, list_a, middle) == 0)
	{
		if (list_a[nb->nba - 1] <= middle)
			ft_pb(nb, list_a, list_b);
		if (list_a[nb->nba - 1] > middle)
			ft_ra(nb, list_a, list_b);
	}
	nb->nbinj[nb->i] = nb->nba;
	if (nb->nbinj[nb->i] < 0)
		nb->nbinj[nb->i] = 0;
	if (nb->i == 1)
		ft_nba4(ft_find_middlenb(nb, list_b, nb->nbb), nb, list_a, list_b);
	nb->i++;
	ft_nba2(ft_find_middlenb(nb, list_a, nb->nba - 1), nb, list_a, list_b);
}

void	ft_nba4(int middle, t_nb *nb, int list_a[nb->nba], int list_b[nb->nbb])
{
	int compt;

	compt = middle / 2;
	while (nb->nba == nb->nbinj[nb->i])
	{
		while (nb->nbb != nb->nbinj[0] - nb->nbinj[nb->i - 1])
			ft_pa(nb, list_a, list_b);
		while (ft_find_inf_middlenb(nb, list_a, middle) == 0)
		{
			if (list_a[nb->nba - 1] <= middle)
				ft_pb(nb, list_a, list_b);
			if (list_a[nb->nba - 1] > middle)
				ft_ra(nb, list_a, list_b);
		}
		middle = middle + compt;
		if ((compt / 2) % 2 == 0)
			compt = compt / 2;
		else
			compt = (compt + 1) / 2;
	}
	return ;
}

void	ft_algofusion2(t_nb *nb, int list_a[nb->nba], int list_b[nb->nbb])
{
	if (ft_find_bignb(nb->nbb, list_b) >= ft_middle(nb->nbb))
	{
		while (ft_bignb(nb->nbb, list_b, 0, nb->nbb - 1) == 0)
			ft_rb(nb, list_b, list_a);
		ft_pa(nb, list_a, list_b);
		if (nb->nbinj[nb->i] == 2 && list_a[nb->nba - 1] > list_a[nb->nba - 2])
			ft_sa(nb, list_a, list_b);
	}
	else if (ft_find_bignb(nb->nbb, list_b) < ft_middle(nb->nbb))
	{
		while (ft_bignb(nb->nbb, list_b, 0, nb->nbb - 1) == 0)
			ft_rrb(nb, list_b, list_a);
		ft_pa(nb, list_a, list_b);
		if (nb->nbinj[nb->i] == 2 && list_a[nb->nba - 1] > list_a[nb->nba - 2])
			ft_sa(nb, list_a, list_b);
	}
}

void	ft_algofusion(t_nb *nb, int list_a[nb->nba], int list_b[nb->nbb])
{
	int i;

	i = 0;
	nb->nbinj[nb->i] = nb->nbinj[nb->i] - nb->nba;
	if (nb->nbb == 0)
		return ;
	while (i < nb->nbinj[nb->i])
	{
		ft_algofusion2(nb, list_a, list_b);
		i++;
	}
	nb->i--;
	ft_algofusion(nb, list_a, list_b);
}
