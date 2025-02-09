/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 17:19:23 by ilallali          #+#    #+#             */
/*   Updated: 2025/02/09 18:03:22 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	process_numbers(char *str, t_stack **stack_a)
{
	long	num;
	int		error;

	if (!is_valid_integer(str))
		return (0);
	num = ft_atoi(str, &error);
	if (error || num < INT_MIN || num > INT_MAX)
		return (0);
	add_node(stack_a, (int)num);
	return (1);
}
