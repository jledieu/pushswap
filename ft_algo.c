/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <jledieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 18:24:46 by jledieu           #+#    #+#             */
/*   Updated: 2016/02/21 18:10:13 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_algo3(t_nb *nb, int list_a[nb->nba], int list_b[nb->nbb])
{
	if (ft_perfect(nb, list_a, 0))
		return ;
	if (ft_bignb(nb->nba, list_a, 0, 1) == 1)
		ft_rra(nb, list_a, list_b);
	else if (ft_bignb(nb->nba, list_a, 0, 2) == 1)
		ft_ra(nb, list_a, list_b);
	else
		ft_sa(nb, list_a, list_b);
	ft_algo3(nb, list_a, list_b);
}

void	ft_algoperfect(t_nb *nb, int list_a[nb->nba], int list_b[nb->nbb])
{
	if (ft_perfect(nb, list_a, 0))
		return ;
	ft_rra(nb, list_a, list_b);
	ft_rra(nb, list_a, list_b);
	ft_sa(nb, list_a, list_b);
	ft_ra(nb, list_a, list_b);
	ft_ra(nb, list_a, list_b);
	return ;
}

void	ft_algo20(int mid, t_nb *nb, int list_a[nb->nba], int list_b[nb->nbb])
{
	int smallnb;

	smallnb = ft_find_smallnb(nb->nba, list_a);
	if (ft_perfect(nb, list_a, 0))
		while (nb->nbb != 0)
			ft_pa(nb, list_a, list_b);
	if (ft_perfect(nb, list_a, 0))
		return ;
	if (ft_smallnb(nb->nba, list_a, 0, nb->nba - 2) == 1)
		ft_sa(nb, list_a, list_b);
	if (smallnb >= mid && ft_smallnb(nb->nba, list_a, 0, nb->nba - 1) == 0)
		while (ft_smallnb(nb->nba, list_a, 0, nb->nba - 1) == 0)
			ft_ra(nb, list_a, list_b);
	else if (smallnb < mid && ft_smallnb(nb->nba, list_a, 0, nb->nba - 1) == 0)
		while (ft_smallnb(nb->nba, list_a, 0, nb->nba - 1) == 0)
			ft_rra(nb, list_a, list_b);
	if (ft_smallnb(nb->nba, list_a, 0, nb->nba - 1) && nb->nba > 3 &&
	ft_perfect(nb, list_a, 0) == 0)
		ft_pb(nb, list_a, list_b);
	if (nb->nba <= 3)
		ft_algo3(nb, list_a, list_b);
	if (nb->nba <= 3)
		while (nb->nbb != 0)
			ft_pa(nb, list_a, list_b);
	ft_algo20(mid, nb, list_a, list_b);
}
