/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:36:10 by lvarela           #+#    #+#             */
/*   Updated: 2021/11/12 13:36:11 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_sort3_a(int **stack, int num, char c)
{
	if ((*stack)[0] > (*stack)[1] &&
		(*stack)[1] > (*stack)[2] && (*stack)[2] < (*stack)[0])
	{
		ft_swap(&(*stack), num, c);
		ft_rev_rotate(&(*stack), num, c);
	}
	else if ((*stack)[0] > (*stack)[1] &&
		(*stack)[1] < (*stack)[2] && (*stack)[2] < (*stack)[0])
		ft_rotate(&(*stack), num, c);
	else if ((*stack)[0] < (*stack)[1] &&
		(*stack)[1] > (*stack)[2] && (*stack)[2] < (*stack)[0])
		ft_rev_rotate(&(*stack), num, c);
	else if ((*stack)[0] > (*stack)[1] &&
			(*stack)[1] < (*stack)[2] && (*stack)[2] > (*stack)[0])
		ft_swap(&(*stack), num, c);
	else if ((*stack)[0] < (*stack)[1] &&
		(*stack)[1] > (*stack)[2] && (*stack)[2] > (*stack)[0])
	{
		ft_swap(&(*stack), num, c);
		ft_rotate(&(*stack), num, c);
	}
	return (0);
}

int	ft_sort3_b(int **stack, int num, char c)
{
	if ((*stack)[0] < (*stack)[1]
		&& (*stack)[1] > (*stack)[2] && (*stack)[2] > (*stack)[0])
		ft_rotate(&(*stack), num, c);
	else if ((*stack)[0] < (*stack)[1]
		&& (*stack)[1] < (*stack)[2] && (*stack)[2] > (*stack)[0])
	{
		ft_swap(&(*stack), num, c);
		ft_rev_rotate(&(*stack), num, c);
	}
	else if ((*stack)[0] > (*stack)[1] &&
		(*stack)[1] < (*stack)[2] && (*stack)[2] > (*stack)[0])
		ft_rev_rotate(&(*stack), num, c);
	else if ((*stack)[0] < (*stack)[1] &&
			(*stack)[1] > (*stack)[2] && (*stack)[2] < (*stack)[0])
		ft_swap(&(*stack), num, c);
	else if ((*stack)[0] > (*stack)[1] &&
		(*stack)[1] < (*stack)[2] && (*stack)[2] < (*stack)[0])
	{
		ft_swap(&(*stack), num, c);
		ft_rotate(&(*stack), num, c);
	}
	return (0);
}
