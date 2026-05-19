/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaguerd <yasser.aguerd@learner.42.tech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:28:02 by yaaguerd          #+#    #+#             */
/*   Updated: 2026/05/19 18:38:56 by yaaguerd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	valid_limit(long n, int sign)
{
	if (sign == 1 && n > INT_MAX)
		return (0);
	if (sign == -1 && (-n) < INT_MIN)
		return (0);
	return (1);
}

static int	parse_sign(char *str, int *i)
{
	if (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			return ((*i)++, -1);
		(*i)++;
	}
	return (1);
}

int	parse_number(char *str, int *nbr)
{
	long	n;
	int		sign;
	int		i;

	n = 0;
	i = 0;
	if (!str || !str[0])
		return (0);
	sign = parse_sign(str, &i);
	if (!(str[i] >= '0' && str[i] <= '9'))
		return (0);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		n = n * 10 + str[i] - '0';
		i++;
		if (!valid_limit(n, sign))
			return (0);
	}
	*nbr = (int)(n * sign);
	return (1);
}

int	has_duplicate(t_stack *a, int value)
{
	while (a)
	{
		if (a->value == value)
			return (1);
		a = a->next;
	}
	return (0);
}
