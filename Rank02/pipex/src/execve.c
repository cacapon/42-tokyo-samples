/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execve.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttsubo <ttsubo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:56:16 by ttsubo            #+#    #+#             */
/*   Updated: 2025/02/15 14:01:35 by ttsubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/**
 * @brief path, argv, envpを指定してプログラムを実行します。
 * 
 * @return int　
 * @note execveはプロセスを置き換えるため、現在のプログラムをそのまま実行できない
 */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", NULL};
	char *envp[] = {NULL};

	if (execve("/bin/ls", argv, envp) == -1)
		return (perror("execve failed"), 1);
	printf("プロセスを置き換えるのでこの出力はされません\n");
	return (0);
}