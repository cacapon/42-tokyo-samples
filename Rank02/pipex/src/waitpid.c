/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   waitpid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttsubo <ttsubo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:23:51 by ttsubo            #+#    #+#             */
/*   Updated: 2025/02/15 14:28:14 by ttsubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	int sts;
	int pid;

	pid = fork();
	if (pid == 0)
	{
		printf("PID(%d) process run...\n", getpid());
		sleep(3);
		printf("PID(%d) process done.\n", getpid());
		exit(0);
	}
	else
	{
		while (waitpid(pid, &sts, WNOHANG) == 0)
		{
			printf("Parent: child waiting...\n");
			sleep(1);
		}
		printf("Parent: done.\n");
	}
	return (0);
}