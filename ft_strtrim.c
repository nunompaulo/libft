/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 14:31:37 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/28 09:20:21 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Trims characters from the beginning and end of a string.
**
** Allocates and returns a copy of 's1' with the characters specified in 
** 'set' removed from the start and the end of the string. The function 
** identifies the first and last characters not present in the set and 
** uses ft_substr to create the resulting trimmed string.
**
** @param s1 The string to be trimmed.
** @param set The reference set of characters to trim.
** @return A pointer to the trimmed string, or NULL if allocation fails.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s1;
	size_t	start;
	char	*new_str;

	if (!s1)
		return (NULL);
	start = 0;
	len_s1 = ft_strlen(s1);
	while (ft_strchr(set, s1[start]))
		start++;
	while (ft_strchr(set, s1[len_s1]))
		len_s1--;
	len_s1 = len_s1 - start + 1;
	new_str = ft_substr(s1, start, len_s1);
	return (new_str);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(int argc, char **argv)
// {
// 	char	*result;

// 	if (argc != 3)
// 	{
// 		printf("Uso: %s \"string para trim\" \"set\"\n", argv[0]);
// 		printf("Exemplo: %s \"  ola mundo  \" \" \"\n", argv[0]);
// 		return (1);
// 	}

// 	result = ft_strtrim(argv[1], argv[2]);

// 	if (!result)
// 	{
// 		printf("Erro: a função retornou NULL\n");
// 		return (1);
// 	}

// 	printf("Original: [%s]\n", argv[1]);
// 	printf("Set     : [%s]\n", argv[2]);
// 	printf("Resultado: [%s]\n", result);

// 	free(result);
// 	return (0);
// }
