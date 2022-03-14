/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:21:44 by hyujung           #+#    #+#             */
/*   Updated: 2022/02/02 19:30:48 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../includes/libft.h"

void	ft_print_str(t_print *tab)
{
	char	*s;
	int		len;

	s = va_arg(tab->args, char *);
	len = 0;
	if (s == NULL)
	{
		s = "(null)";
		len = 6;
	}
	else
		len = ft_strlen(s);
	ft_putstr_fd(s, 1);
	tab->nprinted += len;
}
