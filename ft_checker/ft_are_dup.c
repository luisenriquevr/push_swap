/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_are_dup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:38:17 by lvarela           #+#    #+#             */
/*   Updated: 2021/11/12 13:38:18 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_are_dup(int *stack, int num)
{
	int		i;
	int		j;
	int		stack1;
	int		stack2;

	i = 0;
	while (i < num)
	{
		j = i + 1;
		while (j < num)
		{
			stack1 = stack[i];
			stack2 = stack[j];
			if (stack1 == stack2)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
