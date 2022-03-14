/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uinteger.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 21:00:49 by hyujung           #+#    #+#             */
/*   Updated: 2022/02/02 19:38:15 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../includes/libft.h"

void	ft_print_uinteger(t_print *tab)
{
	unsigned int	i;
	char			*s;
	int				len;

	i = va_arg(tab->args, unsigned int);
	s = ft_utoa(i);
	len = ft_strlen(s);
	ft_putstr_fd(s, 1);
	tab->nprinted += len;
	free(s);
}
