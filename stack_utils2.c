/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaguerd <yasser.aguerd@learner.42.tech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:18:54 by rchavast          #+#    #+#             */
/*   Updated: 2026/05/19 18:30:12 by yaaguerd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign_index(t_stack *stack)
{
	t_stack	*head;
	t_stack	*tmp;
	int		index;

	head = stack;
	while (stack)
	{
		index = 0;
		tmp = head;
		while (tmp)
		{
			if (tmp->value < stack->value)
				index++;
			tmp = tmp->next;
		}
		stack->index = index;
		stack = stack->next;
	}
}

int	get_max_bits(t_stack *stack)
{
	int	max;
	int	bits;

	max = stack_size(stack) - 1;
	bits = 0;
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}

int	get_min_index_pos(t_stack *stack)
{
	int	pos;
	int	best_pos;
	int	min;

	pos = 0;
	best_pos = 0;
	min = stack->index;
	while (stack)
	{
		if (stack->index < min)
		{
			min = stack->index;
			best_pos = pos;
		}
		pos++;
		stack = stack->next;
	}
	return (best_pos);
}
