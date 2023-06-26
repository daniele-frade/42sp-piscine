/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielefrade <danielefrade@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:13:21 by danielefrad       #+#    #+#             */
/*   Updated: 2023/06/26 12:13:22 by danielefrad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cap;

	i = 0;
	cap = 0;
	while (str[i] != '\0')
	{
		if (cap == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			cap++;
		}
		else if (cap > 0 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		else if ((str[i] < '0') || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
			cap = 0;
		else
			cap++;
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int	main()
// {
// 	char str[] = "salYYYYut, comment tu vas ? 42mots";
// 	printf("Before: %s\n", str);
// 	ft_strcapitalize(str);
// 	printf("After: %s\n", str);
// 	return (0);
// }