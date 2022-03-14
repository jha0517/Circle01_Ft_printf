/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:32:01 by hyujung           #+#    #+#             */
/*   Updated: 2022/01/18 13:55:41 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_atoi_base(long int i, const char *str)
{
	while (str[i] == '\t' || str[i] == ' ' || str[i] == '\v'
		|| str[i] == '\n' || str[i] == '\f' || str[i] == '\r')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	long int	i;
	long int	j;
	long int	sum;

	sum = 0;
	i = 0;
	j = 1;
	i = ft_atoi_base(i, str);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j = -j;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum = (sum * 10) + str[i] - 48;
		if (j == 1 && sum > 2147483647)
			return (-1);
		if (j == -1 && sum > 2147483648)
			return (0);
		i++;
	}
	return (sum * j);
}
