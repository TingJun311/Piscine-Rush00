/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctingjun <ctingjun@student.42.kl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:17:50 by ctingjun          #+#    #+#             */
/*   Updated: 2022/08/21 12:40:21 by ctingjun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a);

void	middle(int x, int y)
{
	int	outer;
	int	inner;

	if (y > 2)
	{
		outer = 0;
		while (outer < (y - 2))
		{
			ft_putchar('\n');
			ft_putchar('B');
			inner = 0;
			while (inner < (x - 2))
			{
				ft_putchar(' ');
				inner++;
			}
			if (x > 1)
			{
				ft_putchar('B');
			}
			outer++;
		}
	}
}											

void	bottom_letters(int x, int y)
{
	int	count;

	if (y > 1)
	{
		ft_putchar('\n');
		ft_putchar('C');
		count = 0;
		while (count < (x - 2))
		{
			ft_putchar('B');
			count++;
		}
		if (x > 1)
		{
			ft_putchar('A');
		}
	}
}

void	rush(int x, int y)
{
	int	count;

	if (x > 0 && y > 0)
	{
		ft_putchar('A');
		count = 0;
		while (count < (x - 2))
		{
			ft_putchar('B');
			count++;
		}
		if (x > 1)
		{
			ft_putchar('C');
		}
		middle(x, y);
		bottom_letters(x, y);
	}
	else if (x <= 0 || y <= 0)
	{
		write(1, "Input out of range.", 19);
	}
	else
		write(1, "Please insert a valid integer.", 30);
}
