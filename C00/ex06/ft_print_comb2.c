/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcirpici <tcirpici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:52:47 by tcirpici          #+#    #+#             */
/*   Updated: 2024/08/19 13:18:20 by tcirpici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puthar(char c)
{
	write(1, &c, 1);
}

void	ft_write_comb(int a, int b)
{
	ft_puthar(48 + a / 10);
	ft_puthar(48 + a % 10);
	ft_puthar(' ');
	ft_puthar(48 + b / 10);
	ft_puthar(48 + b % 10);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_write_comb(a, b);
			if (a != 98 || b != 99)
			{
				ft_puthar(',');
				ft_puthar(' ');
			}
			b++;
		}
		a++;
	}
}
