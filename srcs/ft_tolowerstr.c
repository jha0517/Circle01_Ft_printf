/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolowerstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:41:05 by hyujung           #+#    #+#             */
/*   Updated: 2022/02/02 19:31:24 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_tolowerstr(char *str)
{
	char	*str2;
	int		i;

	i = 0;
	str2 = malloc(sizeof(char) * ft_strlen(str) +1);
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			str2[i] = *str + 32;
		}
		else
			str2[i] = *str;
		str++;
		i++;
	}
	str2[i] = '\0';
	return (str2);
}
