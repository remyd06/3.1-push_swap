/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:47:46 by rdedola           #+#    #+#             */
/*   Updated: 2024/06/28 11:47:46 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	error_message(int error)
{
	if (error == 1)
		write(1, "\e[1;31mError:\e[1;97m No Input\n\e[0m", 35);
	if (error == 2)
		write(1, "\e[1;31mError:\e[1;97m Invalid Input\n\e[0m", 40);
	if (error == 3)
		write(1, "\e[1;31mError:\e[1;97m Int Overflow\n\e[0m", 39);
	if (error == 4)
		write(1, "\e[1;31mError:\e[1;97m Duplicates Found\n\e[0m", 43);
	exit(1);
}

void	parser(int argc, const char **argv)
{
	unsigned int	i;

	i = 0;
	if (argc == 0)
		error_message(1);
	while (argv[i])
	{
		if (!isnumber(argv[i]))
			error_message(2);
		if (!isoverflow(argv[i]))
			error_message(3);
		i++;
	}
	if (argc == 1)
		exit(0);
	if (!isduplicate(argv))
		error_message(4);
}
