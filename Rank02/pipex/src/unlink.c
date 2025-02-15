/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unlink.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttsubo <ttsubo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:37:08 by ttsubo            #+#    #+#             */
/*   Updated: 2025/02/15 14:46:26 by ttsubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>
#include <fcntl.h>

/**
 * @brief ファイルを削除します。
 * 
 * @return int 
 */
int main()
{
	const int fd = open("src/delfile.txt", O_RDONLY);
	const char *fname = "src/delfile.txt";
	char buf[128];

	if (fd == -1)
		return (perror("open"), 1);
	if (unlink(fname) == 0)
		printf("file %s deleted.\n", fname);
	else
		perror("unlink");
	read(fd, buf, sizeof(buf));
	printf("中身はまだ確認できます%s\n", buf);
	close(fd);
	return (0);
}