/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfresnai <vfresnai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:12:44 by adthomas          #+#    #+#             */
/*   Updated: 2023/09/24 21:47:31 by vfresnai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <fcntl.h>
# include <stdlib.h>
# include <errno.h>
# include <unistd.h>
# include <stdio.h>
# include <error.h>
# include <libgen.h>
# include <string.h>

# define TOTAL_ENTRIES 41

typedef struct s_dict_entry
{
	struct s_dict_entry	*next;
	char				*str;
	char				*value;
}						t_dict_entry;

typedef struct s_prog
{
	char			*dict_name;
	t_dict_entry	*entries_list;
	char			*value;
	char			*final_str;
	char			*big;
	char			space_flag;
}					t_prog;

typedef struct s_file
{
	char			*filename;
	int				fd;
	char			*buffer;
	unsigned int	cursor;
	unsigned int	size;
}					t_file;

int				ft_parse_args(t_prog *rush, int argc, char **argv);

char			**ft_split(char *str, char *charset);

int				ft_strlen(char *str);
char			*ft_strcpy(char *dest, char *src);
int				ft_strncpy(char *dest, char *src, unsigned int n);
int				ft_strcmp(char *s1, const char *s2);
char			*ft_strdup(char *src);

int				ft_load_file(t_file *file);
int				ft_init_file(t_file *file, char *filename);
int				ft_unload_file(t_file *file);
int				ft_test_if_dir(t_file *file);
char			*ft_filecat_dyn(char *s1, char *s2, int s1_size, int s2_size);

int				ft_push_dict_entry(t_dict_entry	**begin_list, char *str,
					char *value);
t_dict_entry	*ft_create_dict_entry(char *str, char *value);
char			*ft_fetch_value(t_dict_entry *begin_list, char *value);
void			ft_clean_list(t_dict_entry *begin_list);

int				ft_parse_args(t_prog *rush, int argc, char **argv);
int				ft_parse_line(t_prog *rush, char *str1);
char			**ft_parse_file(t_prog *rush, char *filecontent);
char			*ft_get_number(char *str);

void			ft_putchar(char c);
void			ft_putstr(char *str);

void			print_tence_digit(t_prog *rush, char *str, int n, int i);
void			print_hund_digit(t_prog *rush, char *str, int i, int n);
void			print_dez_digit(t_prog *rush, char *str, int n, int i);
int				get_len_nb(t_prog *rush);
char			*big(t_prog *rush, int n);
void			what_to_print(t_prog *rush, int n, int size);
void			print_three_digit(t_prog *rush, char *str, int n);
void			espace_or_no(t_prog *rush);

#endif