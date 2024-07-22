/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <baiannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:52:05 by baiannon          #+#    #+#             */
/*   Updated: 2024/07/22 16:57:17 by baiannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**parse(char **av)
{
	char *join_Args;
	char **split_Args;
	int	i;

	i = 2;
	join_Args = ft_strdup(av[1]);
	if (!join_Args)
		return (NULL);
	while (av[i])
	{
		join_Args = ft_strjoin(join_Args, ft_strdup(av[i]));
		if (!join_Args)
			return (NULL);
		i++;
	}
	split_Args = ft_split(join_Args, ' ');
	if (!split_Args)
		return (NULL);
	return (split_Args);
}


// t_node	*fill_list(t_node *a, char **av)
// {
// 	size_t	i;
// 	long	nbr;
	
// 	i = 0;
// 	while (av[i])
// 	{
// 		nbr = ft_atol(av[i]);
// 		if (nbr > INT_MAX || nbr < INT_MIN)
// 			exit(EXIT_FAILURE);
// 		if (!check_double)
// 			exit(EXIT_FAILURE);
// 		i++;
// 	}
// 	return (a);
// }


int	check_double(char **arg)
{
	long nb1;
	long nb2;
	int	i;
	int	j;
	
	i = 0;
	while (arg[i])
	{
		nb1 = ft_atol(arg[i]);
		if (nb1 > INT_MAX || nb1 < INT_MIN)
			return(0);
		j = i + 1;
		while (arg[j])
		{
			nb2 = ft_atol(arg[j]);
			if (nb1 == nb2)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_number(char *str)
{
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
		str++;
	while (*str == '0')
		str++;
	if (ft_strlen(str) > 11)
		return (0);
	return (1);
}

int	get_sign(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if ((str[0] == '+' || str[0] == '-') && i == 0)
			i++;
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);			
	}
	return (1);
}
int check_args(char **split_args)
{
	int i;

	i = 0;
	if (!check_double(split_args))
			return (0);
	while (split_args[i])
	{
		if (!get_sign(split_args[i]))
			return (0);
		if (!check_number(split_args[i]))
			return (0);
		i++;
	}
	return (1);
}

/*

1- Faire un strjoin de tous les agruments (en ajoutant un espace entre chaque pour eviter futur pb split) 

2- Split la grande chaine qu'on vient de creer au espace 

3-boucler sur le char** qu'a creer le split et verifier que chaque argument et correct -que des chiffre (autorise un + ou - devant) -compris entre INT_min et INT_max -ne depasse un giga LONG qui pourrait overflow -pas de doublon (pour chaque argument valide l'ajouter a la liste chainee) !!! si un argument pas valide tous free et exit !!! 

4- coder les fonctions de mouvement (sa ra etc) 

5-Algo -algo pour 3 chiffre -big algo (viens me voir)  --pre trie de a vers b les petits au dessus (pb) et les grand dessous (pb + rb) --mise en place du cout pour renvoyer dans A --quand tout dans A faire des rotations jusqu'a que le plus petit soit en haut

*/