/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavast <rchavast@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-18 16:18:32 by rchavast          #+#    #+#             */
/*   Updated: 2026-05-18 16:18:32 by rchavast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack **a)
{
	int	x;
	int	y;
	int	z;

	x = (*a)->index;
	y = (*a)->next->index;
	z = (*a)->next->next->index;
	if (x > y && x > z)
		ra(a);
	else if (y > x && y > z)
		rra(a);
	if (!is_sorted(*a))
		sa(a);
}

static void	move_min_to_b(t_stack **a, t_stack **b)
{
	int	pos;
	int	size;

	pos = get_min_index_pos(*a);
	size = stack_size(*a);
	if (pos <= size / 2)
	{
		while (pos-- > 0)
			ra(a);
	}
	else
	{
		while (pos++ < size)
			rra(a);
	}
	pb(a, b);
}

void	sort_five(t_stack **a, t_stack **b)
{
	while (stack_size(*a) > 3)
		move_min_to_b(a, b);
	sort_three(a);
	while (*b)
		pa(a, b);
}
