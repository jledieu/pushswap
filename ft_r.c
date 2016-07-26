/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <jledieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 13:58:54 by jledieu           #+#    #+#             */
/*   Updated: 2016/02/20 22:37:41 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_ra(t_nb *nb, int list_a[nb->nba], int list_b[nb->nbb])
{
	int i;
	int	inb;
	int	list_atmp[nb->nba];

	i = 0;
	if (nb->nba == 0)
		return ;
	while (i + 1 <= nb->nba)
	{
		list_atmp[i] = list_a[i];
		i++;
	}
	inb = nb->nba - 1;
	i = 0;
	list_a[0] = list_atmp[inb];
	while (inb > i)
	{
		list_a[inb] = list_atmp[inb - 1];
		inb--;
	}
	ft_putstr((nb->optc == 1) ? "\033[32mra \033[0m" : "ra ");
	if (nb->opts == 1)
		ft_affich_list(nb->nba, nb->nbb, list_a, list_b);
	nb->optn++;
}

void	ft_rb(t_nb *nb, int list_b[nb->nbb], int list_a[nb->nbb])
{
	int i;
	int	inb;
	int	list_btmp[nb->nbb];

	i = 0;
	if (nb->nbb == 0)
		return ;
	while (i + 1 <= nb->nbb)
	{
		list_btmp[i] = list_b[i];
		i++;
	}
	inb = nb->nbb - 1;
	i = 0;
	list_b[0] = list_btmp[inb];
	while (inb > i)
	{
		list_b[inb] = list_btmp[inb - 1];
		inb--;
	}
	ft_putstr((nb->optc == 1) ? "\033[32mrb \033[0m" : "rb ");
	if (nb->opts == 1)
		ft_affich_list(nb->nba, nb->nbb, list_a, list_b);
	nb->optn++;
}

void	ft_rr(t_nb *nb, int list_a[nb->nba], int list_b[nb->nbb])
{
	ft_rra(nb, list_a, list_b);
	ft_rrb(nb, list_b, list_a);
	ft_putstr("rr ");
}
