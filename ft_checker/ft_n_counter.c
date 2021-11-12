/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_n_counter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:38:31 by lvarela           #+#    #+#             */
/*   Updated: 2021/11/12 13:38:32 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_n_counter(char **argv)
{
	int		i;
	int		j;
	int		n_numbers;

	i = 0;
	n_numbers = 0;
	while (argv[++i] != NULL)
	{
		j = 0;
		while (argv[i][j])
		{
			while (!ft_isdigit(argv[i][j]) && argv[i][j])
				j++;
			n_numbers++;
			while (ft_isdigit(argv[i][j]) && argv[i][j])
				j++;
		}
	}
	return (n_numbers);
}
