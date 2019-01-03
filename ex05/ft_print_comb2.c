/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viboujem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 15:47:26 by viboujem          #+#    #+#             */
/*   Updated: 2018/07/11 10:33:08 by viboujem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
	if (a < '9' || b < '8' || c < '9' || d < '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_loop(char a, char b, char c, char d)
{
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					ft_print(a, b, c, d);
					d++;
				}
				c++;
				d = '0';
			}
			b++;
			c = a;
			d = b + 1;
		}
		a++;
		b = '0';
		c = a;
		d = b + 1;
	}
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	ft_loop(a, b, c, d);
}
