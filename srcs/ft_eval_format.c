/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:55:03 by hyujung           #+#    #+#             */
/*   Updated: 2022/02/02 19:31:02 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../includes/libft.h"

int	ft_eval_format(t_print *tab, const char *str, int pos)
{
	if (ft_strchr(ENDSYMBOL, str[pos]))
	{
		pos = ft_convert_indicator(tab, str, pos);
		ft_initialize_tab(tab);
		return (pos);
	}
	return (pos);
}
