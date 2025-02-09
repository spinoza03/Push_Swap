/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_addfront.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilallali <ilallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:58:24 by ilallali          #+#    #+#             */
/*   Updated: 2025/02/07 12:55:26 by ilallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	stack_add_front(t_stack **stack, t_stack *new_node)
{
	if (!stack || !new_node)
		return;
	new_node->next = *stack;
	*stack = new_node;
}
