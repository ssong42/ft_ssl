/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfreee.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 11:03:37 by ssong             #+#    #+#             */
/*   Updated: 2018/11/10 20:14:53 by ssong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinfreee(char *final, char *end)
{
	char *buf;

	buf = ft_strjoin(final, end);
	ft_memdel((void **)&final);
	return (buf);
}
