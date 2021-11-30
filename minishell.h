/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalman <mbalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:02:53 by mbalman           #+#    #+#             */
/*   Updated: 2021/11/22 17:42:14 by mbalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdio.h>
# include <unistd.h>
# include <dirent.h>
# include <stdlib.h>
# include "libft/libft.h"

// typedef struct s_command
// {
// 	int					number_Args;
// 	char				**arguments;
// 	char				*out_file;
// 	char				*input_file;
// 	char				*err_file;
// 	int					piped;
// 	t_specials			specials;
// 	int					background;
// 	struct s_command	*next;
// 	struct s_command	*prev;
// }						t_command;

// typedef struct s_info
// {
// 	int			num_of_commands;
// 	char		is_odd_single_quatations;
// 	char		is_odd_double_quatations;
// 	char		odd_quote;
// 	short		regime;
// 	char		**env;
// 	t_command	*current_command;
// 	f			func[16];
// }				t_info;

void	ft_cd (char **argv);
#endif