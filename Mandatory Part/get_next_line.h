/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnazioze <vnazioze@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:15:18 by vnazioze          #+#    #+#             */
/*   Updated: 2021/09/30 16:20:30 by vnazioze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

char	*get_next_line(int fd);
char	*ft_strdup(char *string);
int		ft_strlen(const char *string);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *string, int character);
size_t	ft_strlcpy(char *destiny, const char *source, size_t destiny_size);

#endif
