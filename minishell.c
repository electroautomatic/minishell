/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalman <mbalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:01:33 by mbalman           #+#    #+#             */
/*   Updated: 2021/11/09 18:32:39 by mbalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	main(int argc, char **argv)
{
	char	buf[200];

	(void)argc;
	printf("Current directory is: %s\n", getcwd(buf, 200));
	printf("New directory is: %s\n", argv[1]);
	if (chdir(argv[1]) == -1)
	{
		perror("Error:");
	}
	printf("Current directory is: %s\n", getcwd(buf, 200));
	return (0);
}
