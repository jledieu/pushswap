/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <jledieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 14:12:56 by jledieu           #+#    #+#             */
/*   Updated: 2016/02/24 06:52:38 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int		ft_pa(t_nb *nb, int list_a[nb->nba], int list_b[nb->nbb])
{
	int a;
	int b;

	a = 0;
	b = 0;
	if (nb->nbb == 0)
		return (0);
	nb->nba++;
	list_a[nb->nba - 1] = list_b[nb->nbb - 1];
	list_a[nb->nba] = '\0';
	list_b[nb->nbb - 1] = '\0';
	nb->nbb--;
	if (nb->optc == 1)
		ft_putstr("\033[34mpa \033[0m");
	else
		ft_putstr("pa ");
	if (nb->opts == 1)
		ft_affich_list(nb->nba, nb->nbb, list_a, list_b);
	nb->optn++;
	return (1);
}

int		ft_pb(t_nb *nb, int list_a[nb->nba], int list_b[nb->nbb])
{
	int a;
	int b;

	a = 0;
	b = 0;
	if (nb->nba == 0)
		return (0);
	nb->nbb++;
	list_b[nb->nbb - 1] = list_a[nb->nba - 1];
	list_b[nb->nbb] = '\0';
	list_a[nb->nba - 1] = '\0';
	nb->nba--;
	if (nb->optc == 1)
		ft_putstr("\033[31mpb \033[0m");
	else
		ft_putstr("pb ");
	if (nb->opts == 1)
		ft_affich_list(nb->nba, nb->nbb, list_a, list_b);
	nb->optn++;
	return (1);
}
