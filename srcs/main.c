/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <baiannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:44:28 by baiannon          #+#    #+#             */
/*   Updated: 2024/07/27 16:24:47 by baiannon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	print_list(t_node *print)
{
	while (print)
	{
		printf("%d, %d\n ", print->data, print->index);
		print = print->next;
	}
}

int	main(int ac, char **av)
{
	t_node *a;
	char **split_args;

	if (ac <= 1)
		return (0);	
	a = NULL;
	split_args = parse(av);
	check_empty_args(ac, av);
	if (!check_args(split_args))
	{
		write(2, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	a = ft_calloc(sizeof(t_node), 1);
	if (!a)
		exit(EXIT_FAILURE);
	init_list(a, split_args);
	remap(a);
	return 0;
}

/*

1- Faire un strjoin de tous les agruments (en ajoutant un espace entre chaque pour eviter futur pb split) 

2- Split la grande chaine qu'on vient de creer au espace 

3-boucler sur le char** qu'a creer le split et verifier que chaque argument et correct 
-que des chiffre (autorise un + ou - devant) 
-compris entre INT_min et INT_max 
-ne depasse un giga LONG qui pourrait overflow 
-pas de doublon (pour chaque argument valide l'ajouter a la liste chainee) !!! si un argument pas valide tous free et exit !!! 

4- coder les fonctions de mouvement (sa ra etc) 

5-Algo 
-algo pour 3 chiffre -big algo (viens me voir)  
--pre trie de a vers b les petits au dessus (pb) et les grand dessous (pb + rb) --mise en place du cout pour renvoyer dans A 
--quand tout dans A faire des rotations jusqu'a que le plus petit soit en haut

*/

