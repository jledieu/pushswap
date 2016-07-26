/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fctalgo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <jledieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 12:03:45 by jledieu           #+#    #+#             */
/*   Updated: 2016/02/21 18:19:24 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int		ft_bignb(int nb, int list_a[nb], int j, int i)
{
	while (j < nb)
	{
		if (i == j)
			j++;
		if (list_a[i] > list_a[j] && j < nb)
			j++;
		else if (j < nb)
		{
			return (0);
		}
	}
	return (1);
}

int		ft_smallnb(int nb, int list_a[nb], int j, int i)
{
	while (j < nb)
	{
		if (i == j)
			j++;
		if (list_a[i] < list_a[j] && j < nb)
			j++;
		else if (j < nb)
		{
			return (0);
		}
	}
	return (1);
}

int		ft_find_smallnb(int nb, int list_a[nb])
{
	int j;
	int i;
	int smallnb;

	j = 0;
	i = 1;
	smallnb = j;
	while (j < nb)
	{
		if (list_a[j] < list_a[i])
		{
			smallnb = j;
			i = j;
		}
		j++;
	}
	return (smallnb);
}

int		ft_find_bignb(int nb, int list_a[nb])
{
	int j;
	int i;
	int bignb;

	j = 0;
	i = 1;
	bignb = j;
	while (j < nb)
	{
		if (list_a[j] > list_a[i])
		{
			bignb = j;
			i = j;
		}
		j++;
	}
	return (bignb);
}
