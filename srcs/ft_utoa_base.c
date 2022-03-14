/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:28:12 by hyujung           #+#    #+#             */
/*   Updated: 2022/02/02 19:38:59 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../includes/libft.h"

char	*ft_addchar(char *str, unsigned long long nb)
{
	char	*tmp;
	int		i;

	tmp = str;
	i = 0;
	while (str[i] != '\0')
		i++;
	str = (char *)malloc(sizeof(*str) * (i + 2));
	i = 0;
	if (nb > 9)
		str[i] = nb + 55;
	else
		str[i] = nb + 48;
	while (tmp[i] != '\0')
	{
		str[i + 1] = tmp[i];
		i++;
	}
	str[i + 1] = '\0';
	free(tmp);
	return (str);
}

char	*ft_utoa_base(unsigned long long llu, char *b)
{
	char				*str;
	unsigned long long	base;

	base = ft_strlen(b);
	if (base < 2 || base > 16)
		return (NULL);
	str = (char *)malloc(sizeof(*str) * 1);
	str[0] = '\0';
	while (llu / base > 0)
	{
		str = ft_addchar(str, llu % base);
		llu = llu / base;
	}
	str = ft_addchar(str, llu);
	return (str);
}
