/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isduplicate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:48:00 by rdedola           #+#    #+#             */
/*   Updated: 2024/06/28 11:48:02 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

bool	isduplicate(const char **arr)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (arr[i])
	{
		j = i + 1;
		while (arr[j])
		{
			if (!ft_strcmp(arr[i], arr[j]))
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}
