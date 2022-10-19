/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctingjun <ctingjun@student.42.kl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:21:08 by ctingjun          #+#    #+#             */
/*   Updated: 2022/10/19 10:41:03 by ctingjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rush(int x, int y);

int	main(int argc, char **argv)
{
	int	x;
	int	i;
	int	j;

	i = 0;
	x = 0;
	j = 0;
	(void)argc;
	if (argc == 3)
	{
		while (argv[1][i] != '\0')
		{
			x = x * 10 + argv[1][i] - '0';
			i++;
		}
		i = 0;
		while (argv[2][i] != '\0')
		{
			j = j * 10 + argv[2][i] - '0';
			i++;
		}
		rush(x, j);
	}
	else
		write(1, "No input\n", 9);
	return (0);
}
