/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0xNino <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 23:59:01 by 0xNino            #+#    #+#             */
/*   Updated: 2022/01/23 22:31:03 by 0xNino           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

# include <sys/types.h> 
# include <sys/stat.h> 
# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_display_dict_entries(char **ref, int num_entries);
char	**fill_struct( char **str);
char	**struct_tab_init(char **ref);
char	**parsing(char *file);
char	*init_dict(char *dict, char *file);
void	tab_free(char **ref);

#endif
