/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <jledieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 12:45:08 by jledieu           #+#    #+#             */
/*   Updated: 2016/02/20 22:09:04 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int		ft_sa(t_nb *nb, int list_a[nb->nba], int list_b[nb->nbb])
{
	int tmp;

	if (nb->nba == 0 || nb->nba == 1)
		return (0);
	else
	{
		tmp = list_a[nb->nba - 1];
		list_a[nb->nba - 1] = list_a[nb->nba - 2];
		list_a[nb->nba - 2] = tmp;
	}
	if (nb->optc == 1)
		ft_putstr("\033[33msa \033[0m");
	else
		ft_putstr("sa ");
	if (nb->opts == 1)
		ft_affich_list(nb->nba, nb->nbb, list_a, list_b);
	nb->optn++;
	return (1);
}

int		ft_sb(t_nb *nb, int list_b[nb->nbb], int list_a[nb->nbb])
{
	int tmp;

	if (nb->nbb == 0 || nb->nbb == 1)
		return (0);
	else
	{
		tmp = list_b[nb->nbb - 1];
		list_b[nb->nbb - 1] = list_b[nb->nbb - 2];
		list_b[nb->nbb - 2] = tmp;
	}
	if (nb->optc == 1)
		ft_putstr("\033[33msb \033[0m");
	else
		ft_putstr("sb ");
	if (nb->opts == 1)
		ft_affich_list(nb->nba, nb->nbb, list_a, list_b);
	nb->optn++;
	return (1);
}

int		ft_ss(t_nb *nb, int list_a[nb->nba], int list_b[nb->nbb])
{
	ft_sa(nb, list_a, list_b);
	ft_sb(nb, list_b, list_a);
	ft_putstr("ss ");
	return (1);
}
