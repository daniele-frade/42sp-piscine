/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielefrade <danielefrade@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 13:01:45 by danielefrad       #+#    #+#             */
/*   Updated: 2023/06/26 13:02:06 by danielefrad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char	u1;
	unsigned char	u2;

	while (n > 0)
	{
		u1 = (unsigned char) *s1;
		u2 = (unsigned char) *s2;
		s1++;
		s2++;
		if (u1 != u2)
			return (u1 - u2);
		if (u1 == '\0')
			return (0);
		n--;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int    main(void)
// {
//     char    string_1[] = "blue sky";
//     char    string_2[] = "purple sky";
//     char    string_3[] = "bl";
//     printf("string_1 & strin_2  = %d\n", ft_strncmp(string_1, string_2, 2));
//     printf("string_1 & string_3 = %d\n", ft_strncmp(string_1, string_3, 2));
//     printf("string_1 & strin_2  = %d\n", strncmp(string_1, string_2, 2));
//     printf("string_1 & string_3 = %d\n", strncmp(string_1, string_3, 2));
//     return (0);
// }

/*
MAN DESCRIPTION:
The  strcmp()  function compares the two strings s1 and s2.  The locale
is not taken into account (for  a  locale-aware  comparison,  see  str‐
coll(3)).   It  returns an integer less than, equal to, or greater than
zero if s1 is found, respectively, to be less than,  to  match,  or  be
greater than s2.
The  strncmp()  function  is similar, except it compares only the first
(at most) n bytes of s1 and s2.
int strcmp(const char *s1, const char *s2);
SYNOPSIS:
int strcmp(const char *s1, const char *s2);
int strncmp(const char *s1, const char *s2, size_t n);
*/
