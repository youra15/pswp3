/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavast <rchavast@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-18 16:18:58 by rchavast          #+#    #+#             */
/*   Updated: 2026-05-18 16:18:58 by rchavast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_isspace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	ps_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

size_t	ps_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ps_strlen(s));
}

void	error_exit(t_stack **a)
{
	free_stack(a);
	ft_putstr_fd("Error\n", 2);
	exit(1);
}
