/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfrade <dfrade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:16:20 by danielefrad       #+#    #+#             */
/*   Updated: 2023/08/08 08:48:59 by dfrade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
		write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + 48);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb /10);
		ft_putchar(nb % 10 + 48);
	}
	else
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
}

// int	main()
// {
// 	ft_putnbr(3);
// 	return (0);
// }