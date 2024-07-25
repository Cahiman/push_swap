/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <baiannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 20:39:04 by baiannon          #+#    #+#             */
/*   Updated: 2024/07/25 19:31:56 by baiannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf.h"
# include "libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <limits.h>

typedef struct s_node
{
	int	data;
	int	index;
	
	struct s_node *next;
	struct s_node *prev;
}	t_node;


void	print_list(t_node *print);


int	find_min_arg(t_node **a, int old_min);
void	init_list(t_node *a, char **split);
int		list_size(t_node *lst);
void	remap(t_node *data);
void	check_empty_args(int ac, char **av);
void	*ft_free(char **s);
char	**parse(char **av);
long	ft_atol(const char *nptr);
int		main(int ac, char **av);
int		check_number(char *str);
int		check_args(char **split_args);

#endif