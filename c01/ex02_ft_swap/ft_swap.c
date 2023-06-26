/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielefrade <danielefrade@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:14:25 by danielefrad       #+#    #+#             */
/*   Updated: 2023/06/25 20:44:41 by danielefrad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// #include <stdio.h>

// int	main(void)
// {
// 		int	a = 5;
// 		int	b = 10;
// 		ft_swap(&a, &b);
// 		printf("Now the value of aa is: %d\n", a);
// 		printf("Now the value of bb is: %d\n", b);
// 		return(0);
// }