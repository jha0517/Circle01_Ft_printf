/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_final_alignement_i.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 21:07:32 by hyujung           #+#    #+#             */
/*   Updated: 2022/02/02 19:30:11 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../includes/libft.h"

void	ft_final_alignement_i(t_print *tab, int i)
{
	char			*s;
	int				len;
	unsigned long	lu;

	if (i == -2147483648)
		s = "2147483648";
	else
	{
		if (i < 0)
			lu = i * -1;
		else
			lu = i;
		s = ft_itoa(lu);
	}
	len = ft_strlen(s);
	if (i < 0)
	{
		ft_putchar_fd('-', 1);
		len += 1;
	}
	ft_putstr_fd(s, 1);
	tab->nprinted += len;
	if (i != -2147483648)
		free(s);
}
