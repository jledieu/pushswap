/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <jledieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 11:52:08 by jledieu           #+#    #+#             */
/*   Updated: 2016/03/28 23:59:07 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>

typedef struct	s_nb
{
	int		nba;
	int		nbb;
	int		i;
	int		nbinj[100];
	int		nbstart;
	int		opt;
	int		opta;
	int		optc;
	int		optl;
	int		opts;
	int		optnu;
	int		optn;
}				t_nb;

int				ft_strlen(const char *s);
int				ft_middle(int nba);
int				ft_sa(t_nb *nb, int list_a[nb->nba], int list_b[nb->nbb]);
int				ft_sb(t_nb *nb, int list_b[nb->nbb], int list_a[nb->nbb]);
int				ft_pa(t_nb *nb, int list_a[nb->nba], int list_b[nb->nbb]);
int				ft_pb(t_nb *nb, int list_a[nb->nba], int list_b[nb->nbb]);
int				ft_ss(t_nb *nb, int list_a[nb->nba], int list_b[nb->nbb]);
int				ft_perfect(t_nb *nb, int list_a[nb->nba], int i);
int				ft_perfectend(t_nb *nb, int list_a[nb->nba], int i);
int				ft_perfectend2(t_nb *nb, int list_a[nb->nba], int i);
int				ft_bignb(int nb, int list_a[nb], int j, int i);
int				ft_smallnb(int nb, int list_a[nb], int j, int i);
int				ft_find_middle(int deb, t_nb *nb, int list_a[nb->nba]);
int				ft_find_bignb(int nb, int list_a[nb]);
int				ft_find_smallnb(int nb, int list_a[nb]);
int				ft_find_middlenb(t_nb *nb, int list_a[nb->nba], int j);
int				ft_find_inf_middlenb(t_nb *nb, int list_a[nb->nba],
	int middlenb);
void			ft_affich_list(int nba, int nbb, int list_a[nba],
	int list_b[nbb]);
void			ft_algo3(t_nb *nb, int list_a[nb->nba], int list_b[nb->nbb]);
void			ft_algoperfect(t_nb *nb, int list_a[nb->nba],
	int list_b[nb->nbb]);
void			ft_algo20(int middle, t_nb *nb, int list_a[nb->nba],
	int list_b[nb->nbb]);
void			ft_algofusion(t_nb *nb, int list_a[nb->nba],
	int list_b[nb->nbb]);
void			ft_nba2(int middlenb, t_nb *nb, int list_a[nb->nba],
	int list_b[nb->nbb]);
void			ft_nba4(int middle, t_nb *nb, int list_a[nb->nba],
	int list_b[nb->nbb]);
void			ft_ra(t_nb *nb, int list_a[nb->nba], int list_b[nb->nbb]);
void			ft_rb(t_nb *nb, int list_b[nb->nbb], int list_a[nb->nbb]);
void			ft_rra(t_nb *nb, int list_a[nb->nba], int list_b[nb->nbb]);
void			ft_rrb(t_nb *nb, int list_b[nb->nbb], int list_a[nb->nbb]);
void			ft_rr(t_nb *nb, int list_a[nb->nba], int list_b[nb->nbb]);
void			ft_rrr(t_nb *nb, int list_a[nb->nba], int list_b[nb->nbb]);
void			ft_errordoubl(int nba, int listnb[nba]);
void			ft_errornb(int nba, char **argv, t_nb *nb);
void			ft_errorint(int nba, char **argv, t_nb *nb);
void			ft_putchar(char c);
void			ft_putstr(const char *str);
void			ft_putnbr(int n);
void			ft_optiona(t_nb *nb, char **argv, int i, int j);
void			ft_optionc(t_nb *nb, char **argv, int i, int j);
void			ft_optionl(t_nb *nb, char **argv, int i, int j);
void			ft_options(t_nb *nb, char **argv, int i, int j);
void			ft_optionn(t_nb *nb, char **argv, int i, int j);
long long		ft_atoiull(const char *str);
t_nb			*ft_struct(int argc);

#endif
