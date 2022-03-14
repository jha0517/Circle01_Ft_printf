/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 19:47:47 by hyujung           #+#    #+#             */
/*   Updated: 2022/01/18 13:51:48 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *str, int j)
{
	int	len;

	len = ft_strlen(str);
	while (0 <= len)
	{
		if (str[len] == (char)j)
			return (&(((char *)str)[len]));
		len--;
	}
	return (NULL);
}
