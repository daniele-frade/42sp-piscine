/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielefrade <danielefrade@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 10:59:54 by danielefrad       #+#    #+#             */
/*   Updated: 2023/06/24 11:33:11 by danielefrad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	numbers;

	numbers = '0';
	while (numbers >= '0' && numbers <= '9')
	{
		write(1, &numbers, 1);
		numbers++;
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }