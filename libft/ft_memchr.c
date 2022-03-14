/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 19:49:19 by hyujung           #+#    #+#             */
/*   Updated: 2022/01/18 13:46:14 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	unsigned char	*result;
	size_t			i;

	result = (unsigned char *)ptr;
	i = 0;
	while (i < n)
	{
		if (result[i] == (unsigned char)c)
			return ((void *)&result[i]);
		i++;
	}
	return (NULL);
}
