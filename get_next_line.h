/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihybang <jihybang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 19:13:46 by jihybang          #+#    #+#             */
/*   Updated: 2023/06/12 21:49:19 by jihybang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
//# define BUFFER_SIZE 10

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

char	*make_line(int fd, char *save, char *buf, int n);
char	*make_backup(char *line);
char	*get_next_line(int fd);
char	*ft_strdup(char *s1);
int		ft_strlen(char *str);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(char *s, int c);

#endif
