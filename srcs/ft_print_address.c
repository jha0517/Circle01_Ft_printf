/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:25:14 by hyujung           #+#    #+#             */
/*   Updated: 2022/02/02 19:37:37 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../includes/libft.h"

char	*ft_else(void *p)
{
	unsigned long long	p_llu;
	char				*s;
	char				*s2;

	p_llu = (unsigned long long) p;
	s = ft_utoa_base(p_llu, "0123456789abcdef");
	s2 = ft_tolowerstr(s);
	ft_putstr_fd("0x", 1);
	free(s);
	return (s2);
}

void	ft_print_address(t_print *tab)
{
	void				*p;
	char				*s2;
	int					len;

	p = va_arg(tab->args, void *);
	if (!p)
	{
		len = 3;
		s2 = "0x0";
	}
	else
	{
		s2 = ft_else(p);
		len = ft_strlen(s2) + 2;
	}
	ft_putstr_fd(s2, 1);
	tab->nprinted += len;
	if (p)
		free(s2);
}
