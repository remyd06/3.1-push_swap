/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:48:48 by rdedola           #+#    #+#             */
/*   Updated: 2024/06/28 11:48:48 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

static void	ra_(t_list **stack_a)
{
	t_list	*last;

	last = ft_lstlast(*stack_a);
	last->next = *stack_a;
	*stack_a = (*stack_a)->next;
	last->next->next = NULL;
}

static void	rb_(t_list **stack_b)
{
	t_list	*last;

	last = ft_lstlast(*stack_b);
	last->next = *stack_b;
	*stack_b = (*stack_b)->next;
	last->next->next = NULL;
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	ra_(stack_a);
	rb_(stack_b);
	write(1, "rr\n", 3);
}
