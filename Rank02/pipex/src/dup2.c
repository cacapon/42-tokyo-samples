/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dup2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttsubo <ttsubo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:42:57 by ttsubo            #+#    #+#             */
/*   Updated: 2025/02/15 13:55:25 by ttsubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

/**
 * @brief dup2は既存のFDをnewfdにこぴーします。
 * 
 * @return int
 * @note dup2で複製した後は元のfdを閉じても動かせます。 
 */
int main(void)
{
	const int fd = open("src/sample.txt", O_RDONLY);
	const int newfd;
	char buf[100];
	if (fd == -1)
		return (perror("open"), 1);
	dup2(fd, newfd);
	if (newfd == -1)
		return (perror("dup2"), 1);
	close(fd);
	read(newfd, buf, 100);
	close(newfd);
	printf("%s\n",buf);
}