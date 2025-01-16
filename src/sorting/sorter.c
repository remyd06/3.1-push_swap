/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:47:22 by rdedola           #+#    #+#             */
/*   Updated: 2024/06/28 11:47:22 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sorter(t_list **stack_a, t_list **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (issorted(*stack_a))
		return ;
	if (size == 2)
		sa(stack_a);
	else if (size <= 5)
		simple_sort(stack_a, stack_b, size);
	else
	{
		init_index(*stack_a);
		radix_sort(stack_a, stack_b, size);
	}
}
