/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strerror.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttsubo <ttsubo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:15:44 by ttsubo            #+#    #+#             */
/*   Updated: 2025/02/15 13:25:38 by ttsubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <errno.h>

/**
 * @brief strerrorはerrnoを元にエラーメッセージの文字列を返します。
 * 
 * @return int 
 */
int main(void)
{
	printf("正常値:%s\n", strerror(errno));
	FILE *file = fopen("no-file.txt", "r");
	printf("ファイル開けない:%s\n", strerror(errno));
	
	return (0);
}