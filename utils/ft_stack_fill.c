/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_fill.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:54:11 by lvarela           #+#    #+#             */
/*   Updated: 2021/11/15 11:29:51 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_next(char **argv, int *i, int *j)
{
	while (!ft_isdigit(argv[(*i)][(*j)]) && argv[(*i)][(*j)])
	{
		if (ft_isalpha(argv[(*i)][(*j)]))
			return (1);
		*j = *j + 1;
	}
	return (0);
}

int	ft_stack_fill(t_data *data, char **argv)
{
	int			i;
	int			j;
	int			k;
	long int	num;

	i = 0;
	k = 0;
	while (argv[++i] != NULL)
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_next(argv, &i, &j) == 1)
				return (1);
			num = ft_atoi(&argv[i][j]);
			if (num > 2147483647 || num < -2147483648)
				return (1);
			data->stack_a[k++] = (int)num;
			while (ft_isdigit(argv[i][j]) && argv[i][j])
				j++;
		}
	}
	return (0);
}
