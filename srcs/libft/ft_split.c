/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 21:25:35 by lcardiga          #+#    #+#             */
/*   Updated: 2021/11/10 21:58:33 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME:
 	ft_split
PROTOTYPE:
	char **ft_split(char const *s, char c);
TURN IN FILES:
 	-
PARAMETERS:
 	#1.  The string to be split.
	#2.  The delimiter character.
RETURN VALUE:
 	The array of new strings resulting from the split.
	NULL if the allocation fails.
EXTERNAL FUNCTIONS:
 	malloc, free
DESCRIPTION:
	Allocates (with malloc(3)) and returns an array
	of strings obtained by splitting ’s’ using the
	character ’c’ as a delimiter.  The array must be
	ended by a NULL pointer.
*/

#include "libft.h"

char	ft_words(const char *str, char c)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			k++;
			while (str[i] != '\0' && str[i] != c)
				i++;
		}
	}
	return (k);
}

char	*ft_wd(const char *str, char c)
{
	int		i;
	char	*wd;

	i = 0;
	while (*str && *str == c)
		str++;
	while (str[i] && str[i] != c)
		i++;
	wd = malloc(sizeof(char) * (i + 1));
	if (wd == NULL)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != c)
	{
		wd[i] = str[i];
		i++;
	}
	wd[i] = '\0';
	return (wd);
}

void	free_words(int i, char **ptr)
{
	while (i > 0)
	{
		free(ptr[i - 1]);
		i--;
	}
	free(ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr_words;
	int		words;
	int		i;

	if (!s)
		return (NULL);
	words = ft_words(s, c);
	ptr_words = malloc(sizeof(char *) * (words + 1));
	if (!ptr_words)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s && *s == c)
			s++;
		ptr_words[i] = ft_wd(s, c);
		if (ptr_words[i] == NULL)
			free_words(i, ptr_words);
		while (*s && *s != c)
			s++;
		i++;
	}
	ptr_words[i] = NULL;
	return (ptr_words);
}

/*
char	**ft_split(char const *s, char c)
{
	char	**array_of_words;
	char	*word;
	int		count_of_words;
	int		len_of_word;
	int		j;
	int		i;
	int		k;

	count_of_words = 0;
	if (!s)
		return ((char **)(void **)0);
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count_of_words++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	array_of_words = (char **)malloc(sizeof(char *) * (count_of_words + 1));
	if (!array_of_words)
		return ((char **)(void *)0);
	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			len_of_word = 0;
			while (s[i + len_of_word] && s[i + len_of_word] != c)
				len_of_word++;
			word = (char *)malloc((len_of_word + 1) * sizeof(char));
			if (!word)
			{
				while (k > 0)
				{
					free(array_of_words[k - 1]);
					k--;
				}
				free(array_of_words);
				return ((char **)(void **)0);
			}
			j = 0;
			while (s[i + j] && s[i - len_of_word + j] != c)
			{
				word[j] = s[i + j];
				i++;
				j++;
			}
			word[j] = '\0';
			array_of_words[k] = word;
			k++;
		}
		else
			i++;
	}
	array_of_words[k] = ((char *)(void *)0);
	return (array_of_words);
}

*/