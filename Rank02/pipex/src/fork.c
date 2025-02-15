/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fork.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttsubo <ttsubo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:02:33 by ttsubo            #+#    #+#             */
/*   Updated: 2025/02/15 14:11:28 by ttsubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/**
 * @brief forkは新しいプロセスを作成します。　fork以降の処理を並行して実行します。
 * 
 * @return int
 * @note 子のプロセスにはpidに0が入ります。
 * @note 親と子で別の処理をしたい場合はpidで分岐させる
 *  
 */
int main(void)
{
	int pid = fork();

	if (pid > 0)	// parent
		printf("parent process: PID=%d, child PID=%d\n", getpid(), pid);
	else if (pid == 0)
		printf("child process: PID%d, parent PID=%d\n", getpid(), getppid());
	else
		return (perror("fork failed"), 1);
	return (0);
}