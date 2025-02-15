/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dup.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttsubo <ttsubo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:42:57 by ttsubo            #+#    #+#             */
/*   Updated: 2025/02/15 13:54:06 by ttsubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

/**
 * @brief dupは既存のFDをコピーして、新しいFDを返します。
 * 
 * @return int
 * @note dupで複製した後は元のfdを閉じても動かせます。 
 */
int main(void)
{
	const int fd = open("src/sample.txt", O_RDONLY);
	const int newfd = dup(fd);
	char buf[100];
	if (fd == -1)
		return (perror("open"), 1);
	if (newfd == -1)
		return (perror("dup"), 1);
	close(fd);
	read(newfd, buf, 100);
	close(newfd);
	printf("%s\n",buf);
}