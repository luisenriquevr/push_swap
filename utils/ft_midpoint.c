/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_midpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:36:56 by lvarela           #+#    #+#             */
/*   Updated: 2021/11/15 20:40:40 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_aux_sort(int *aux, int size)
{
	int	aux2;
	int	i;

	i = 0;
	aux2 = 0;
	while (i < size - 1)
	{
		if (aux[i] > aux[i + 1])
		{
			aux2 = aux[i];
			aux[i] = aux[i + 1];
			aux[i + 1] = aux2;
			i = 0;
		}
		else
			i++;
	}
	return (*aux);
}

int	ft_midpoint(int *stack, int size)
{
	int	i;
	int	*aux;
	int	mid;

	i = -1;
	aux = (int *)malloc(sizeof(int) * size);
	while (++i < size)
		aux[i] = stack[i];
	ft_aux_sort(aux, size);
	if (size == 4)
		mid = aux[(size - 1) / 2];
	else if (size >= 9 && size <= 15)
		mid = aux[size / 3];
	else if (size <= 8)
		mid = aux[size / 2];
	else if (size == 500)
		mid = aux[size / 11];
	else if (size >= 250)
		mid = aux[size / 10];
	else if (size >= 100)
		mid = aux[size / 6];
	else
		mid = aux[size / 5];
	free(aux);
	return (mid);
}
