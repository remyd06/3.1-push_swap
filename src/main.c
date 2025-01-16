/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:45:41 by rdedola           #+#    #+#             */
/*   Updated: 2024/06/28 11:45:41 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, const char **argv)
{
	t_list		*stack_a;
	t_list		*stack_b;
	const char	**split;

	stack_b = NULL;
	if (argc == 2)
	{
		split = ft_split(argv[1], ' ');
		parser(ft_countwords(argv[1], ' '), split);
		stack_a = init_stack(ft_countwords(argv[1], ' '), split);
	}
	else
	{
		parser(argc - 1, argv + 1);
		stack_a = init_stack(argc - 1, argv + 1);
	}
	sorter(&stack_a, &stack_b);
	ft_lstfree(stack_a);
	ft_lstfree(stack_b);
	return (0);
}
