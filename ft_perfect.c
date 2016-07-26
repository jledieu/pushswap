/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perfect.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <jledieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/21 18:19:00 by jledieu           #+#    #+#             */
/*   Updated: 2016/02/21 18:19:20 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int		ft_perfect(t_nb *nb, int list_a[nb->nba], int i)
{
	int	compt;

	compt = 0;
	while (i < nb->nba - 1)
	{
		if (list_a[i] > list_a[i + 1])
			compt++;
		i++;
	}
	if (compt == nb->nba - 1)
		return (1);
	return (0);
}

int		ft_perfectend(t_nb *nb, int list_a[nb->nba], int i)
{
	int	compt;
	int tmpi;

	compt = 0;
	tmpi = i;
	while (i < nb->nba - 1)
	{
		if (list_a[i] > list_a[i + 1])
			compt++;
		i++;
	}
	if (compt == nb->nba - 1 - tmpi)
		return (1);
	return (0);
}

int		ft_perfectend2(t_nb *nb, int list_a[nb->nba], int i)
{
	int tmpi;
	int j;
	int compt;
	int compt2;

	tmpi = i;
	i = 0;
	compt2 = 0;
	while (i < tmpi)
	{
		j = tmpi;
		compt = 0;
		while (j < nb->nba)
		{
			if (list_a[i] > list_a[j])
				compt++;
			j++;
		}
		if (compt == nb->nba - 2)
			compt2++;
		i++;
	}
	if (compt2 == 2)
		return (1);
	return (0);
}
