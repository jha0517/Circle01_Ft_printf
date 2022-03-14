/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:47:51 by hyujung           #+#    #+#             */
/*   Updated: 2022/02/01 20:13:58 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../includes/libft.h"

int	ft_printf(const char *str, ...)
{
	t_print	*tab;
	int		pos;
	int		ret;

	pos = 0;
	tab = (t_print *)malloc(sizeof(t_print));
	if (!tab)
		return (-1);
	ft_initialize_tab(tab);
	tab->nprinted = 0;
	va_start(tab->args, str);
	while (str[pos])
	{
		if (str[pos] != '%')
			tab->nprinted += write(1, &str[pos], 1);
		else if (str[pos] == '%')
			pos = ft_eval_format(tab, str, pos + 1) - 1;
		pos++;
	}
	ret = tab->nprinted;
	tab->nprinted = 0;
	va_end(tab->args);
	free(tab);
	return (ret);
}
