/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wait.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttsubo <ttsubo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:12:01 by ttsubo            #+#    #+#             */
/*   Updated: 2025/02/15 14:19:17 by ttsubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	int sts;
	pid_t p_pid = fork();
	pid_t c_pid;

	if (p_pid == -1)
		return (perror("fork:"), 1);
	else if (p_pid == 0)
	{
		printf("child: PID==%d\n", getpid());
		sleep(2);
		printf("child end\n");
		exit(42);
	}
	else
	{
		c_pid = wait(&sts);
		if (WIFEXITED(sts))
			printf("child(PID=%d) done, sts=%d\n", c_pid, WEXITSTATUS(sts));
		else
			printf("child(PID=%d) is failed\n", c_pid);
	}
	return (0);
}