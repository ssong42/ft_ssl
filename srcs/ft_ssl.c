/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ssl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 13:12:49 by ssong             #+#    #+#             */
/*   Updated: 2018/03/26 13:35:20 by ssong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ssl.h"

int main(int argc, char **argv)
{
	if (argc == 1 || argc > 4)
	{
		ft_printf("usage: ft_ssl command [command opts] [command args]\n");
		return (0);
	}
	if (ft_strcmp(argc[1], "base64"))
		base_64(argv[2]);
	else if (ft_strcmp(argc[1], "des"))
		return (0);
	else if (ft_strcmp(argc[1], "des-ecb"))
		return (0);
	else if (ft_strcmp(argc[1], "des-cbc"))
		return (0);
	else
	{
		ft_printf("ft_ssl: '%s' is an invalid command.\n", argc[1])
		ft_printf("\nStandard commands:\n\nMessage Digest commands:\n\n");
		ft_printf("Cipher commands:\nbase64\ndes\ndes-ecv\ndes-cbc\n");
	}
	return (0);
}
