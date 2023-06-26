/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielefrade <danielefrade@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:41:08 by danielefrad       #+#    #+#             */
/*   Updated: 2023/06/26 11:32:27 by danielefrad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char * str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char string[] = "dani";
// 	printf("The length of the string passed is: %d\n", ft_strlen(string));
// 	return (0);
// }
