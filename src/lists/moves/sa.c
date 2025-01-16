/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:48:31 by rdedola           #+#    #+#             */
/*   Updated: 2024/06/28 11:48:31 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

void	sa(t_list **stack_a)
{
	t_list	*swap;
	int		temp;

	swap = (*stack_a)->next;
	temp = (*stack_a)->value;
	(*stack_a)->value = swap->value;
	swap->value = temp;
	write(1, "sa\n", 3);
}
