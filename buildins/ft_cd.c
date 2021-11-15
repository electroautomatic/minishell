/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalman <mbalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:36:33 by mbalman           #+#    #+#             */
/*   Updated: 2021/11/10 11:49:53 by mbalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	ft_cd(char **argv)
{
	char	buf[200];

	printf("Current directory is: %s\n", getcwd(buf, 200));
	printf("New directory is: %s\n", argv[1]);
	if (chdir(argv[1]) == -1)
	{
		perror("Error:");
	}
	printf("Current directory is: %s\n", getcwd(buf, 200));
}
