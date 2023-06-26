/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielefrade <danielefrade@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:45:24 by danielefrad       #+#    #+#             */
/*   Updated: 2023/06/25 21:26:19 by danielefrad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	remainder;
	
	if (*b != 0)
	{
		division = *a / *b;
		remainder = *a % *b;
		*a = division;
		*b = remainder;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	a = 10;
// 	int	b = 5;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("The result of the division is: %d\n", a);
// 	printf("The remainder of the division is: %d\n", b);
// }
