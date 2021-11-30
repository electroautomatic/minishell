/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalman <mbalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:01:33 by mbalman           #+#    #+#             */
/*   Updated: 2021/11/23 16:27:24 by mbalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

typedef struct s_env
{
	char		*key;
	char		*separator;
	char		*value;
	struct s_env *next;
}			t_env;


int	ft_env(char **env)
{
	t_env	*temp;
	t_env	*env_list_begin;
	t_env	*env_list_last;
	int		i;
	char	*temp_str;
	char	separator;
	int		size;
	
	env_list_begin = NULL;
	env_list_last = NULL;
	separator = '=';
	i = 0;
	size = 0;

	while (env[i])
	{
		temp_str = ft_strdup(env[i]);
		temp = malloc(sizeof(t_env));
				
		while (temp_str[size] != '=')
		{
			size++;
		}

		temp->key = (char *)malloc(sizeof(char) * (size + 1));
		
		while (size)
		{
			*(temp->key) = *(temp_str);
			temp_str++;
			size--;
		}
		
		(*temp).key = NULL;
		if (env_list_last)
		{
			env_list_last->next = temp;
			env_list_last = env_list_last ->next;
		}
		else
		{
			env_list_begin = temp;
			env_list_last = env_list_begin;
		}
	}			
	printf("******************************\n");
	while (env_list_begin)
	{
		printf("%s\n", env_list_begin->value);
		env_list_begin = env_list_begin->next;
	}
	printf("******************************\n");

	return(0);
}

int	main(int argc, char **argv, char **env)
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
	// printf("%d\n", isatty(1));
	// printf("%s\n", ttyname(1));
	// printf("%d\n", ttyslot());
	while ((dirent = readdir(dir)) !=  NULL)
	{
		printf("%s\n", dirent->d_name);
	}
	closedir(dir);
	printf("%s\n", getenv("PWD"));
	ft_env(env);


	return (0);
}
