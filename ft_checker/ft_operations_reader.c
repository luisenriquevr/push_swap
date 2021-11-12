/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations_reader.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:38:40 by lvarela           #+#    #+#             */
/*   Updated: 2021/11/12 13:38:41 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_operation_name_checker(char *str)
{
	if (ft_strncmp(str, "pa\0", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "pb\0", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "sa\0", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "sb\0", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "ss\0", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "ra\0", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "rb\0", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "rr\0", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "rra\0", 4) == 0)
		return (1);
	else if (ft_strncmp(str, "rrb\0", 4) == 0)
		return (1);
	else if (ft_strncmp(str, "rrr\0", 4) == 0)
		return (1);
	ft_putstr_fd("Error\n", 2);
	return (0);
}

int	ft_operations_reader(t_list **operations)
{
	char	*line;

	line = NULL;
	while (get_next_line(0, &line))
	{
		if (ft_operation_name_checker(line))
			ft_lstadd_back(operations, ft_lstnew((void *)line));
		else
		{
			free(line);
			line = NULL;
		}
	}
	if (line != NULL)
		free(line);
	return (0);
}
