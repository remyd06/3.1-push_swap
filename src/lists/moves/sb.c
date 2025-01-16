/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:48:24 by rdedola           #+#    #+#             */
/*   Updated: 2024/06/28 11:48:24 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

void	sb(t_list **stack_b)
{
	t_list	*swap;
	int		temp;

	swap = (*stack_b)->next;
	temp = (*stack_b)->value;
	(*stack_b)->value = swap->value;
	swap->value = temp;
	write(1, "sb\n", 3);
}
