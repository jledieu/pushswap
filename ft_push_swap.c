/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <jledieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 11:51:30 by jledieu           #+#    #+#             */
/*   Updated: 2016/02/22 19:31:15 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_optiono(t_nb *nb, char **argv, int i, int j)
{
	if (argv[i][j] == 'o' && argv[i][j + 1] == '\0')
	{
		ft_putstr("Options :\n");
		ft_putstr("-o : Liste des options\n");
		ft_putstr("-c : Couleur\n");
		ft_putstr("-a : Change l'algorithme (Pour les listes > 20)\n");
		ft_putstr("-l : Voir le resultat final\n");
		ft_putstr("-s : Voir toutes les operations\n");
		ft_putstr("-n : Voir le nombre d'operations\n");
		exit(EXIT_FAILURE);
	}
	ft_optiona(nb, argv, i, j);
	ft_optionc(nb, argv, i, j);
	ft_optionl(nb, argv, i, j);
	ft_options(nb, argv, i, j);
	ft_optionn(nb, argv, i, j);
}

int		ft_option(t_nb *nb, char **argv, int argc)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (argv[i][j] == '-')
	{
		j = 1;
		if (ft_strlen(argv[i]) != 2)
			return (1);
		if (argv[i][j] >= '0' && argv[i][j] <= '9')
			return (1);
		if (argv[i][j] != 'a' && argv[i][j] != 'c' && argv[i][j] != 'l' &&
		argv[i][j] != 'o' && argv[i][j] != 's' && argv[i][j] != 'n')
			return (1);
		ft_optiono(nb, argv, i, j);
		j = 0;
		i++;
		if (nb->opt == argc - 1)
			return (0);
	}
	return (1);
}

void	ft_push_swap(t_nb *nb, int list_a[nb->nba])
{
	int		list_b[nb->nba + 1];

	list_b[nb->nbb] = '\0';
	if (nb->nba <= 3)
		ft_algo3(nb, list_a, list_b);
	else if (ft_perfectend(nb, list_a, 2) && ft_perfectend2(nb, list_a, 2))
		ft_algoperfect(nb, list_a, list_b);
	else if (nb->nba <= 20 || nb->opta == 1)
		ft_algo20(ft_middle(nb->nba), nb, list_a, list_b);
	else
	{
		ft_nba2(ft_find_middlenb(nb, list_a, nb->nba - 1), nb, list_a, list_b);
		nb->i = nb->i - 1;
		ft_algofusion(nb, list_a, list_b);
	}
	if (nb->optl == 1 && nb->opts == 0)
		ft_affich_list(nb->nba, nb->nbb, list_a, list_b);
}

void	ft_list(int argc, char **argv, t_nb *nb, int listnb[argc])
{
	int		nbargv;
	int		nbargc;
	int		compt;

	nbargc = 1 + nb->opt;
	compt = 1;
	while (argc > nbargc)
	{
		nbargv = ft_atoiull(argv[nbargc]);
		listnb[argc - compt++ - 1 - nb->opt] = nbargv;
		nbargc++;
	}
	listnb[compt] = '\0';
}

int		main(int argc, char **argv)
{
	int		listnb[argc];
	t_nb	*nb;

	if (argc > 1)
	{
		nb = ft_struct(argc);
		if (ft_option(nb, argv, argc) == 0)
		{
			ft_putchar('\n');
			return (1);
		}
		ft_errornb(nb->nba, argv, nb);
		ft_errorint(nb->nba, argv, nb);
		ft_list(argc, argv, nb, listnb);
		ft_errordoubl(nb->nba, listnb);
		ft_push_swap(nb, listnb);
		if (nb->optnu == 1)
		{
			ft_putstr("\nnumber of operation :\n");
			ft_putnbr(nb->optn);
		}
	}
	ft_putchar('\n');
	return (1);
}
