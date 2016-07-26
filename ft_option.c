/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_option.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <jledieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/20 23:44:22 by jledieu           #+#    #+#             */
/*   Updated: 2016/02/20 23:50:39 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_optiona(t_nb *nb, char **argv, int i, int j)
{
	if (argv[i][j] == 'a' && argv[i][j + 1] == '\0')
	{
		if (nb->opta == 1)
		{
			ft_putstr("Error");
			ft_putchar('\n');
			exit(EXIT_FAILURE);
		}
		nb->opta = 1;
		nb->opt++;
		nb->nba = nb->nba - 1;
		nb->nbstart = nb->nbstart - 1;
	}
}

void	ft_optionc(t_nb *nb, char **argv, int i, int j)
{
	if (argv[i][j] == 'c' && argv[i][j + 1] == '\0')
	{
		if (nb->optc == 1)
		{
			ft_putstr("Error");
			ft_putchar('\n');
			exit(EXIT_FAILURE);
		}
		nb->optc = 1;
		nb->opt++;
		nb->nba = nb->nba - 1;
		nb->nbstart = nb->nbstart - 1;
	}
}

void	ft_optionl(t_nb *nb, char **argv, int i, int j)
{
	if (argv[i][j] == 'l' && argv[i][j + 1] == '\0')
	{
		if (nb->optl == 1)
		{
			ft_putstr("Error");
			ft_putchar('\n');
			exit(EXIT_FAILURE);
		}
		nb->optl = 1;
		nb->opt++;
		nb->nba = nb->nba - 1;
		nb->nbstart = nb->nbstart - 1;
	}
}

void	ft_options(t_nb *nb, char **argv, int i, int j)
{
	if (argv[i][j] == 's' && argv[i][j + 1] == '\0')
	{
		if (nb->opts == 1)
		{
			ft_putstr("Error");
			ft_putchar('\n');
			exit(EXIT_FAILURE);
		}
		nb->opts = 1;
		nb->opt++;
		nb->nba = nb->nba - 1;
		nb->nbstart = nb->nbstart - 1;
	}
}

void	ft_optionn(t_nb *nb, char **argv, int i, int j)
{
	if (argv[i][j] == 'n' && argv[i][j + 1] == '\0')
	{
		if (nb->optnu == 1)
		{
			ft_putstr("Error");
			ft_putchar('\n');
			exit(EXIT_FAILURE);
		}
		nb->optnu = 1;
		nb->opt++;
		nb->nba = nb->nba - 1;
		nb->nbstart = nb->nbstart - 1;
	}
}
