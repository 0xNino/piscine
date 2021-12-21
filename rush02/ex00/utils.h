/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngenoud <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 23:58:40 by ngenoud           #+#    #+#             */
/*   Updated: 2021/09/18 23:58:47 by ngenoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include <sys/types.h> 
# include <sys/stat.h> 
# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

unsigned long long	ft_atoi(char *str);
char				*ft_strcpy(char *dest, char *src);
int					ft_isspace(char c);

#endif
