/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fctalgo2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <jledieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/21 00:04:10 by jledieu           #+#    #+#             */
/*   Updated: 2016/02/22 20:06:11 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int		ft_middle(int nba)
{
	int middle;

	if (nba % 2 == 0)
		middle = nba / 2;
	else
		middle = (nba - 1) / 2;
	return (middle);
}

int		ft_find_middlenb(t_nb *nb, int list_a[nb->nba], int j)
{
	int middlenb;
	int i;
	int compt;

	i = 0;
	compt = 0;
	middlenb = ft_middle(nb->nba) - 1;
	while (i < nb->nba)
	{
		if (list_a[j] > list_a[i])
			compt++;
		i++;
	}
	if (compt == middlenb)
		return (list_a[j]);
	return (ft_find_middlenb(nb, list_a, j - 1));
}

int		ft_find_inf_middlenb(t_nb *nb, int list_a[nb->nba], int middlenb)
{
	int i;

	i = 0;
	while (i < nb->nba)
	{
		if (list_a[i] > middlenb)
			i++;
		else
			return (0);
	}
	return (1);
}

int		ft_find_middle(int deb, t_nb *nb, int list_a[nb->nba])
{
	int i;
	int tmpdeb;
	int compt;

	tmpdeb = nb->nba - deb;
	while (tmpdeb < nb->nba)
	{
		i = nb->nba - deb;
		compt = 0;
		while (i < nb->nba)
		{
			if (list_a[tmpdeb] > list_a[i])
				compt++;
			i++;
		}
		if (compt == (nb->nba - deb) / 2)
			return (list_a[tmpdeb]);
		tmpdeb++;
	}
	return (0);
}

void	ft_affich_list(int nba, int nbb, int list_a[nba], int list_b[nbb])
{
	int i;

	i = nba - 1;
	ft_putstr("\n\nlist_a :\n");
	while (i >= 0)
	{
		ft_putnbr(list_a[i]);
		if (i != 0)
			ft_putchar(' ');
		i--;
	}
	i = nbb - 1;
	ft_putstr("\nlist_b :\n");
	while (i >= 0)
	{
		ft_putnbr(list_b[i]);
		if (i != 0)
			ft_putchar(' ');
		i--;
	}
	ft_putchar('\n');
}
