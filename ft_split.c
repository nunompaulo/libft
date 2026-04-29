/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 15:56:23 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/28 11:37:02 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Counts the number of strings delimited by a character.
**
** Scans the string 's' to count how many substrings exist that are 
** separated by the character 'c'.
**
** @param s The string to be analyzed.
** @param c The delimiter character.
** @return The total number of words found.
*/
static size_t	ft_counter(const char *s, char c)
{
	size_t	wcount;
	int		start;

	start = -1;
	wcount = 0;
	while (s[++start])
		if (s[start] != c && (s[start + 1] == c || s[start + 1] == 0))
			wcount++;
	return (wcount);
}

/*
** @brief Frees the allocated memory of a string array.
**
** Iterates through the array 'arr' up to index 'n', freeing each 
** string, and then frees the array itself.
**
** @param arr The array of strings to be freed.
** @param n The number of elements to free.
** @return None.
*/
static void	ft_freemem(char **arr, size_t n)
{
	while (n--)
		free(arr[n]);
	free(arr);
}

/*
** @brief Finds the start and length of the next string.
**
** Skips the delimiter characters 'c' to find the beginning of a string 
** and calculates its length until the next delimiter or end of string.
**
** @param s The string to search.
** @param c The delimiter character.
** @param start A pointer to the current index, updated to the word's start.
** @param len A pointer where the calculated length will be stored.
** @return None.
*/
static void	ft_strsize(const char *s, char c, size_t *start, size_t *len)
{
	while (s[*start] == c)
		(*start)++;
	*len = 0;
	while (s[*start + *len] && s[*start + *len] != c)
		(*len)++;
}

/*
** @brief Splits a string into an array of strings using a delimiter.
**
** Allocates and returns an array of strings obtained by splitting 's' 
** using the character 'c' as a delimiter. The array is terminated 
** by a NULL pointer.
**
** @param s The string to be split.
** @param c The delimiter character.
** @return The array of new strings, or NULL if memory allocation fails.
*/
char	**ft_split(char const *s, char c)
{
	size_t	start;
	size_t	nwords;
	char	**arr;
	size_t	len;
	size_t	n;

	if (!s)
		return (NULL);
	nwords = ft_counter(s, c);
	arr = ft_calloc(nwords + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	n = 0;
	start = 0;
	while (n < nwords)
	{
		ft_strsize(s, c, &start, &len);
		arr[n] = ft_substr(s, start, len);
		if (!arr[n++])
			return (ft_freemem(arr, n), NULL);
		start += len;
	}
	return (arr);
}

/*
** #include <stdio.h>
** 
** int	main(void)
** {
** 	char	*str = "----  Libft-e-espetacular-pessoal  ----";
** 	char	sep = '-';
** 	char	**resultado;
** 	int		i;
** 
** 	printf("String original: \"%s\"\n", str);
** 	printf("Separador: '%c'\n\n", sep);
** 	resultado = ft_split(str, sep);
** 	if (!resultado)
** 		return (printf("Erro na alocação de memória.\n"), 1);
** 	i = 0;
** 	while (resultado[i] != NULL)
** 	{
** 		printf("Palavra [%d]: %s\n", i, resultado[i]);
** 		free(resultado[i]);
** 		i++;
** 	}
** 	free(resultado);
** 	return (0);
** }
*/
