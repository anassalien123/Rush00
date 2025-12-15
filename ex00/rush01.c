/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancheab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 17:20:39 by ancheab           #+#    #+#             */
/*   Updated: 2025/08/19 15:04:24 by ancheab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	draw_line(int numb_colon_x, char begin, char milieu, char end)
{
	int	j;

	j = 0;
	while (j < numb_colon_x)
	{
		if (j == 0)
			ft_putchar(begin);
		else
		{
			if (j == numb_colon_x - 1)
				ft_putchar(end);
			else
				ft_putchar(milieu);
		}
		j++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0 || x >= 2147483647 || y >= 2147483647)
		return ;
	while (i < y)
	{
		if (i == 0)
			draw_line(x, '/', '*', '\\');
		else
		{
			if (i == y - 1)
				draw_line(x, '\\', '*', '/');
			else
				draw_line(x, '*', ' ', '*');
		}
		i++;
	}
}
