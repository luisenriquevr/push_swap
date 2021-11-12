/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations_maker.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:38:35 by lvarela           #+#    #+#             */
/*   Updated: 2021/11/12 13:38:36 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_operations_to_make(t_data *data, char *str)
{
	if (ft_strncmp(str, "pa\0", 3) == 0)
		return (ft_push_a(data, 0));
	else if (ft_strncmp(str, "pb\0", 3) == 0)
		return (ft_push_b(data, 0));
	else if (ft_strncmp(str, "sa\0", 3) == 0)
		return (ft_swap(&data->stack_a, data->num_a, '\0'));
	else if (ft_strncmp(str, "sb\0", 3) == 0)
		return (ft_swap(&data->stack_b, data->num_b, '\0'));
	else if (ft_strncmp(str, "ss\0", 3) == 0)
		return (ft_swap_ab(data, 0));
	else if (ft_strncmp(str, "ra\0", 3) == 0)
		return (ft_rotate(&data->stack_a, data->num_a, '\0'));
	else if (ft_strncmp(str, "rb\0", 3) == 0)
		return (ft_rotate(&data->stack_b, data->num_b, '\0'));
	else if (ft_strncmp(str, "rr\0", 3) == 0)
		return (ft_rotate_ab(data, 0));
	else if (ft_strncmp(str, "rra\0", 4) == 0)
		return (ft_rev_rotate(&data->stack_a, data->num_a, '\0'));
	else if (ft_strncmp(str, "rrb\0", 4) == 0)
		return (ft_rev_rotate(&data->stack_b, data->num_b, '\0'));
	else if (ft_strncmp(str, "rrr\0", 4) == 0)
		return (ft_rev_rotate_ab(data, 0));
	return (0);
}

int	ft_operations_maker(t_data *data, t_list **operations)
{
	t_list	*node;

	node = *operations;
	if (node != NULL)
	{
		while (node->next)
		{
			ft_operations_to_make(data, (char *)node->content);
			free(node->content);
			node = node->next;
		}
		ft_operations_to_make(data, (char *)node->content);
		free(node->content);
	}
	ft_lstfree_all(operations);
	return (0);
}
