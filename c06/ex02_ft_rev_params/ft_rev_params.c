/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielefrade <danielefrade@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 16:17:47 by danielefrad       #+#    #+#             */
/*   Updated: 2023/07/03 08:58:05 by danielefrad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int	argc, char	**argv)
{
	int	arg;
	int	arg_char;

	arg = argc -1;
	if (argc > 1)
	{
		while (arg > 0) 
		{
			arg_char = 0;
			while (argv[arg][arg_char] != '\0')
			{
				write(1, &argv[arg][arg_char], 1);
				arg_char++;
			}
			write(1, "\n", 1);
			arg--;
		}
	}
	return (0);
} 