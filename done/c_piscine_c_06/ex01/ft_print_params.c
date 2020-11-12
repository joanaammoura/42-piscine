/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 19:53:52 by jalves-m          #+#    #+#             */
/*   Updated: 2020/11/11 19:24:01 by jalves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		main(int argc, char **argv)
{
	int		j;
	int		k;

	k = 1;
	while (k < argc)
	{
		j = 0;
		while (argv[k][j] != '\0')
		{
			write(1, &argv[k][j], 1);
			j++;
		}
		write(1, "\n", 1);
		k++;
	}
	return (0);
}
