/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbalon-s <mbalon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 18:14:51 by mbalon-s          #+#    #+#             */
/*   Updated: 2019/01/30 20:58:48 by mbalon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_queue
{
	size_t			size;
	t_list			*head;
	t_list			*tail;
}					t_queue;

typedef struct		s_stack
{
	size_t			size;
	t_list			*head;
}					t_stack;

typedef	struct		s_imatrix
{
	size_t			n;
	size_t			m;
	int				*values;
}					t_imatrix;

typedef struct		s_fmatrix
{
	size_t			n;
	size_t			m;
	double			*values;
}					t_fmatrix;

typedef struct		s_hashmap
{
	size_t			modulo;
	size_t			size;
	unsigned int	(*hash) (const void *, size_t);
	t_queue			*values;
}					t_hashmap;

void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t len);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(const char *s);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dst, char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *haystack, const char *needle,
								size_t len);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f) (char *));
void				ft_striteri(char *s, void (*f) (unsigned int, char *));
char				*ft_strmap(char const *s, char (*f) (char));
char				*ft_strmapi(char const *s, char (*f) (unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);
void				ft_putchar(int c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del) (void *, size_t));
void				ft_lstdel(t_list **alst, void (*del) (void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f) (t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem));
size_t				ft_lstlength(t_list *lst);
t_queue				ft_queuecreate(void);
void				ft_queueappend(t_queue *queue, t_list *item);
t_list				*ft_queuepop(t_queue *queue);
void				ft_queuefree(t_queue *queue, void (*del) (void *, size_t));
t_stack				ft_stackcreate(void);
void				ft_stackadd(t_stack *stack, t_list *item);
t_list				*ft_stackpop(t_stack *stack);
void				ft_stackfree(t_stack *stack, void (*del) (void *, size_t));
int					ft_iround(double x);
t_imatrix			ft_imatrixtheta(size_t n, size_t m);
t_imatrix			ft_imatrixidentity(size_t n);
int					ft_imatrixget(t_imatrix matrix,
									size_t i, size_t j, int *value);
int					ft_imatrixset(t_imatrix matrix,
									size_t i, size_t j, int value);
t_imatrix			ft_imatrixadd(t_imatrix a, t_imatrix b);
t_imatrix			ft_imatrixsub(t_imatrix a, t_imatrix b);
t_imatrix			ft_imatrixmul(t_imatrix a, t_imatrix b);
t_imatrix			ft_imatrixtranspose(t_imatrix a);
void				ft_imatrixfree(t_imatrix *matrix);
/* fmatrix */
t_fmatrix			ft_fmatrixtheta(size_t n, size_t m);
t_fmatrix			ft_fmatrixidentity(size_t n);
int					ft_fmatrixget(t_fmatrix matrix,
									size_t i, size_t j, double *value);
int					ft_fmatrixset(t_fmatrix matrix,
									size_t i, size_t j, double value);
t_fmatrix			ft_fmatrixadd(t_fmatrix a, t_fmatrix b);
t_fmatrix			ft_fmatrixsub(t_fmatrix a, t_fmatrix b);
t_fmatrix			ft_fmatrixmul(t_fmatrix a, t_fmatrix b);
//t_fmatrix			ft_fmatrixtranspose(t_fmatrix a);
//void				ft_fmatrixfree(t_fmatrix *matrix);
//
//t_imatrix			ft_fmatrix2imatrix(t_fmatrix matrix);
//t_fmatrix			ft_imatrix2fmatrix(t_imatrix matrix);
/* hashmap */
// get
// set
// delete
#endif
