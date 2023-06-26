/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielefrade <danielefrade@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 11:35:56 by danielefrad       #+#    #+#             */
/*   Updated: 2023/06/26 11:05:26 by danielefrad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alpha;

	alpha = 'a';
	while (alpha >= 'a' && alpha <= 'z')
	{
		write(1, &alpha, 1);
		alpha++;
	}
}

// int main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }