/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:48:09 by rdedola           #+#    #+#             */
/*   Updated: 2024/06/28 11:48:09 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_list	*init_stack(int argc, const char **argv)
{
	t_list	*head;
	t_list	*current;
	int		i;

	i = 0;
	head = ft_lstnew(ft_atoi(argv[i++]));
	current = head;
	while (i < argc)
	{
		current->next = ft_lstnew(ft_atoi(argv[i]));
		current = current->next;
		i++;
	}
	return (head);
}
