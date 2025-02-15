/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttsubo <ttsubo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:48:01 by ttsubo            #+#    #+#             */
/*   Updated: 2025/02/15 15:49:19 by ttsubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// size_t ft_strlen(const char *s)
// {
// 	size_t len;
	
// 	len = 0;
// 	while (s[len])
// 		len++;
// 	return (len);
// }

// size_t ft_strlen_until(const char *s, char stop)
// {
// 	const char *pos = strchr(s, stop);
// 	if (pos)
// 		return ((size_t)(pos - s));
// 	else
// 		return ft_strlen(s);
// }

// char	*ft_strndup(const char *s, size_t n)
// {
// 	size_t	s_len;
// 	char	*dup;

// 	s_len = ft_strnlen(s, n);
// 	dup = malloc(s_len + 1);
// 	if (!dup)
// 		return NULL;
// 	memcpy(dup, s, s_len);
// 	dup[s_len] = 0;
// 	return (dup);
// }

// void	ft_free_split(char **cmds, size_t i)
// {
// 	while (i > 0)
// 		free(cmds[--i]);
// 	free(cmds);
// }

// char **cmd_split(char *s, char c)
// {
// 	char **cmds;
// 	int	i;
// 	int	w_count;
// 	size_t w_len;

// 	i = 0;
// 	w_count = word_count(s,c);
// 	cmds = calloc(w_count, sizeof(char *));
// 	while (i < w_count)
// 	{
// 		w_len = ft_strlen_until(s, c);
// 		cmds[i] = ft_strndup(s, w_len);
// 		if (!cmds[i])
// 			return (ft_free_split(cmds, i), NULL);
// 		s += w_len;
// 		i++;
// 	}
// 	return (cmds);
// }

int main(int argc, char **argv)
{
	return (0);
	// char **cmds = cmd_split(argv[1], ' ');
	// while (*cmds)
	// {
	// 	print("%s\n", *cmds);
	// 	cmds++;
	// }
}