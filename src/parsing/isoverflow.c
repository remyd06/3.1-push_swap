/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isoverflow.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:47:51 by rdedola           #+#    #+#             */
/*   Updated: 2024/06/28 11:47:52 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

bool	isoverflow(const char *str)
{
	unsigned int	i;
	bool			is_negative;
	long			result;

	i = 0;
	is_negative = 0;
	result = 0;
	if (str[i] == '-')
	{
		is_negative = 1;
		i++;
	}
	while (str[i])
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (is_negative)
		result = -result;
	if (result < -2147483648 || result > 2147483647)
		return (false);
	return (true);
}
