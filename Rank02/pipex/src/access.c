/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   access.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttsubo <ttsubo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:33:54 by ttsubo            #+#    #+#             */
/*   Updated: 2025/02/15 13:39:24 by ttsubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/**
 * @brief accessはファイルの存在有無やアクセス権を確認できます。
 * 
 * @return int 
 */
int main(void)
{
	const char *fname = "src/sample.txt";
	printf("sample mod is 644\n");
	printf("%s F_OK=%d\n", fname, access(fname, F_OK));
	printf("%s R_OK=%d\n", fname, access(fname, R_OK));
	printf("%s W_OK=%d\n", fname, access(fname, W_OK));
	printf("%s X_OK=%d\n", fname, access(fname, X_OK));
	return (0);
}