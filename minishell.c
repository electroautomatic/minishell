/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalman <mbalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:01:33 by mbalman           #+#    #+#             */
/*   Updated: 2021/11/10 14:53:53 by mbalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	main(int argc, char **argv)
{
	DIR				*dir;
	struct dirent	*dirent;

	(void)argc;
	ft_cd(argv);
	dir = opendir(".");
	if (!dir)
	{
		perror("dirNopen");
		exit (1);
	}
	printf("%d\n", isatty(1));
	printf("%s\n", ttyname(1));
	printf("%d\n", ttyslot());
	while ((dirent = readdir(dir)) !=  NULL)
	{
		printf("%s\n", dirent->d_name);
	}
	closedir(dir);
	printf("%s", getenv("PWD"));


	return (0);
}
