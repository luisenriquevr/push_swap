/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_thegreatest.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:54:58 by lvarela           #+#    #+#             */
/*   Updated: 2021/11/15 11:41:50 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_thegreatest(int *stack, int stack_n)
{
	int	i;
	int	greatest_n;

	i = 0;
	greatest_n = -2147483648;
	while (i < stack_n)
	{
		if (stack[i] > greatest_n)
			greatest_n = stack[i];
		i++;
	}
	return (greatest_n);
}
