/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielefrade <danielefrade@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:28:41 by danielefrad       #+#    #+#             */
/*   Updated: 2023/06/25 20:44:03 by danielefrad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	div = 1;
// 	int	mod = 1;
// 	printf("Value of div before: %d\n", div);
// 	printf("Value of mod before: %d\n", mod);
// 	ft_div_mod(10, 5, &div, &mod);
// 	printf("Value of div after: %d\n", div);
// 	printf("Value of mod after: %d\n", mod);
// }