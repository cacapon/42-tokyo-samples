/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipe.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttsubo <ttsubo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:29:41 by ttsubo            #+#    #+#             */
/*   Updated: 2025/02/15 14:36:22 by ttsubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>
#include <string.h>

/**
 * @brief pipeは親子間プロセスで一方向にデータを送信できます。
 * 
 * @return int 
 */
int main(void)
{
	int pipefd[2];
	int pid;
	char buf[128];
	const char *mes = "to > parent";

	if (pipe(pipefd) == -1)
		return (perror("pipe"), 1);
	pid = fork();
	if (pid == -1)
		return (perror("fork"), 1);
	if (pid == 0)
	{
		close(pipefd[1]);
		read(pipefd[0], buf, sizeof(buf));
		printf("rcv: %s\n", buf);
		close(pipefd[0]);
	}
	else
	{
		close(pipefd[0]);
		write(pipefd[1], mes, strlen(mes) + 1);
		close(pipefd[1]);
	}
	return (0);
}