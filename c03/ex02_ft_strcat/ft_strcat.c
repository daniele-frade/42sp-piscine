/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielefrade <danielefrade@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 13:03:31 by danielefrad       #+#    #+#             */
/*   Updated: 2023/06/26 13:03:40 by danielefrad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int    main(void)
// {
//     char    string_1[] = "sky is ";
//     char    string_2[] = "purple";
//     char    string_3[] = "sky is ";
//     char    string_4[] = "purple";
//     printf("ft_strcat: = %s\n", ft_strcat(string_1, string_2));
// 	printf("strcat: = %s\n", strcat(string_3, string_4));
//     return (0);
// }

/*
MAN DESCRIPTION:
The  strcat() function appends the src string to the dest string, over‐
writing the terminating null byte ('\0') at the end of dest,  and  then
adds  a  terminating  null  byte.  The strings may not overlap, and the
dest string must have enough space for the  result.   If  dest  is  not
large  enough, program behavior is unpredictable; buffer overruns are a
favorite avenue for attacking secure programs.
The strncat() function is similar, except that:
	*it will use at most n bytes from src; and
	*src does not need to be null-terminated if it  contains  n  or  more
	bytes.
As  with  strcat(),  the resulting string in dest is always null-termi‐
nated.
If src contains n or more bytes, strncat() writes n+1 bytes to dest  (n
from  src plus the terminating null byte).  Therefore, the size of dest
must be at least strlen(dest)+n+1.
SYNOPSIS:
char *strcat(char *dest, const char *src);
char *strncat(char *dest, const char *src, size_t n);
*/