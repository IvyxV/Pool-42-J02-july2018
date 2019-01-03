/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viboujem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 22:48:11 by viboujem          #+#    #+#             */
/*   Updated: 2018/07/10 20:26:00 by viboujem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long nb2;

	nb2 = nb;
	if (nb2 < 0)
	{
		ft_putchar('-');
		nb2 = nb2 * -1;
	}
	if (nb2 < 10 && nb2 >= 0)
		ft_putchar(nb2 + '0');
	else if (nb2 >= 10)
	{
		ft_putnbr(nb2 / 10);
		ft_putchar(nb2 % 10 + '0');
	}
}
