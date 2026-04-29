/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 12:13:10 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/27 09:00:54 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Checks if the received number 'nbr' is positive '+' or negative '-'
** and the number of digits that will need to convert.
** 
** @param nbr Pointer to the number to be converted
** @param signal Pointer to the variable that will indicates if it is '-' or '+'.
** @return int	Return the len of the number to be converted.
*/
static int	ft_numlen(long *nbr, int *signal)
{
	int		len;
	long	n;

	if (*nbr == 0)
		return (1);
	len = 0;
	if (*nbr < 0)
	{
		len++;
		*signal = 45;
		*nbr = -(*nbr);
	}
	n = *nbr;
	while (n > 0)
		n = (len++, n / 10);
	return (len);
}

/*
** @brief Converts an integer into a null-terminated string.
**
** Allocates memory and generates a string representing the integer value 
** passed as an argument. The function handles negative numbers and the 
** minimum value of an int (INT_MIN) by using a long type for internal 
** calculations to prevent overflow.
**
** @param n The integer to be converted.
** @return A pointer to the new string, or NULL if memory allocation fails.
*/
char	*ft_itoa(int n)
{
	char	*str;
	int		signal;
	int		len;
	long	calc;

	signal = 0;
	calc = n;
	len = ft_numlen(&calc, &signal);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (len--)
	{
		str[len] = (calc % 10) + 48;
		calc /= 10;
	}
	if (signal != 0)
		str[0] = signal;
	return (str);
}

// int	main(void)
// {
// 	int	i;

// 	i = 0;
// 	printf("Number: %d\n", i);
// 	printf("Result: %s\n", ft_itoa(i));
// 	return (0);
// }
