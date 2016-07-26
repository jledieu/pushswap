/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <jledieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 16:11:49 by jledieu           #+#    #+#             */
/*   Updated: 2016/02/20 22:34:13 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_rra(t_nb *nb, int list_a[nb->nba], int list_b[nb->nbb])
{
	int i;
	int	list_atmp[nb->nba];

	i = 0;
	if (nb->nba == 0)
		return ;
	while (i + 1 <= nb->nba)
	{
		list_atmp[i] = list_a[i];
		i++;
	}
	i = 0;
	list_a[nb->nba - 1] = list_atmp[0];
	while (i + 2 <= nb->nba)
	{
		list_a[i] = list_atmp[i + 1];
		i++;
	}
	if (nb->optc == 1)
		ft_putstr("\033[36mrra \033[0m");
	else
		ft_putstr("rra ");
	if (nb->opts == 1)
		ft_affich_list(nb->nba, nb->nbb, list_a, list_b);
	nb->optn++;
}

void	ft_rrb(t_nb *nb, int list_b[nb->nbb], int list_a[nb->nbb])
{
	int i;
	int	list_btmp[nb->nbb];

	if (nb->nbb == 0)
		return ;
	i = 0;
	while (i + 1 <= nb->nbb)
	{
		list_btmp[i] = list_b[i];
		i++;
	}
	i = 0;
	list_b[nb->nbb - 1] = list_btmp[0];
	while (i + 2 <= nb->nbb)
	{
		list_b[i] = list_btmp[i + 1];
		i++;
	}
	if (nb->optc == 1)
		ft_putstr("\033[36mrrb \033[0m");
	else
		ft_putstr("rrb ");
	if (nb->opts == 1)
		ft_affich_list(nb->nba, nb->nbb, list_a, list_b);
	nb->optn++;
}

void	ft_rrr(t_nb *nb, int list_a[nb->nba], int list_b[nb->nbb])
{
	ft_ra(nb, list_a, list_b);
	ft_rb(nb, list_b, list_a);
	ft_putstr("rrr ");
}
