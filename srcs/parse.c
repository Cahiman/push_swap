/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baiannon <baiannon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:52:05 by baiannon          #+#    #+#             */
/*   Updated: 2024/07/23 15:20:15 by baiannon         ###   ########.fr       */
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

/*

1- Faire un strjoin de tous les agruments (en ajoutant un espace entre chaque pour eviter futur pb split) 

2- Split la grande chaine qu'on vient de creer au espace 

3-boucler sur le char** qu'a creer le split et verifier que chaque argument et correct -que des chiffre (autorise un + ou - devant) -compris entre INT_min et INT_max -ne depasse un giga LONG qui pourrait overflow -pas de doublon (pour chaque argument valide l'ajouter a la liste chainee) !!! si un argument pas valide tous free et exit !!! 

4- coder les fonctions de mouvement (sa ra etc) 

5-Algo -algo pour 3 chiffre -big algo (viens me voir)  --pre trie de a vers b les petits au dessus (pb) et les grand dessous (pb + rb) --mise en place du cout pour renvoyer dans A --quand tout dans A faire des rotations jusqu'a que le plus petit soit en haut

*/