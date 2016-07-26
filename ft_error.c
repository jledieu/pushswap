/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <jledieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 11:51:40 by jledieu           #+#    #+#             */
/*   Updated: 2016/02/22 20:00:45 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"
#include "limits.h"

void	ft_errorint(int nba, char **argv, t_nb *nb)
{
	int			i;
	long long	ullargv;

	i = 1 + nb->opt;
	while (i <= nba + nb->opt)
	{
		ullargv = ft_atoiull(argv[i]);
		if (ullargv < -2147483648 || ullargv > 2147483647)
		{
			ft_putstr("Error");
			ft_putchar('\n');
			exit(EXIT_FAILURE);
		}
		i++;
	}
}

void	ft_errordoubl(int nba, int listnb[nba])
{
	int i;
	int j;

	i = 0;
	while (i + 1 <= nba)
	{
		j = 0;
		while (j != i)
		{
			if (listnb[i] == listnb[j])
			{
				ft_putstr("Error");
				ft_putchar('\n');
				exit(EXIT_FAILURE);
			}
			j++;
		}
		i++;
	}
}

void	ft_errornb(int nba, char **argv, t_nb *nb)
{
	int i;
	int j;

	i = 1 + nb->opt;
	while (i <= nba + nb->opt)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] == '-' || argv[i][j] == '+')
				j++;
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				ft_putstr("Error");
				ft_putchar('\n');
				exit(EXIT_FAILURE);
			}
			j++;
		}
		i++;
	}
}
