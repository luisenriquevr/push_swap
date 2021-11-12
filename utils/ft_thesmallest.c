/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_thesmallest.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:56:48 by lvarela           #+#    #+#             */
/*   Updated: 2021/11/12 14:56:49 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_thesmallest(int *stack, int stack_n)
{
	int	i;
	int	smallest_n;

	i = 0;
	smallest_n = 214748364;
	while (i < stack_n)
	{
		if (stack[i] < smallest_n)
			smallest_n = stack[i];
		i++;
	}
	return (smallest_n);
}
