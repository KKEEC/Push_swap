/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:15:44 by kkc               #+#    #+#             */
/*   Updated: 2025/02/10 10:53:47 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

void	print_array(int *a, int size);
size_t	ft_countsubstr(char const *str, char c);
size_t	ft_strlen(const char *s);
void	free_strings(char **strings, int count);
char	*ft_strdup(const char *str);
char	*ft_strjoin(const char *s1, const char *s2);
char	**ft_split(char const *s, char c);
long	ft_atol(const char *str);
int		*ft_handleargs(char **argv);
int		ft_isvalidarg(char *argv);
int		ft_isdigit(int c);
int		ft_plusminus(int c);
int		ft_isint(long nbr);
int		ft_isspace(int c);
void	ft_safe_free(int **ptr);
int		ft_checkdup(int *a, int size);
int		ft_issorted(int *a, int size);
int		ft_issorteddesc(int *a, int size);
int		ft_maxindex(int *a, int size);
int		ft_minindex(int *a, int size);
int		ft_get_median(int *array, int length);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_duparray(int *array, int *temparr, int size);
void	ft_initiatesort(int **a, int *sizea, int **b, int *sizeb);
void	ft_sorttwonums(int **a, int *sizea);
void	ft_sortthreenums(int **a, int *sizea);
void	ft_sortfournums(int **a, int *sizea, int **b, int *sizeb);
void	ft_sortfivenums(int **a, int *sizea, int **b, int *sizeb);
void	ft_sortuntil19(int **a, int *sizea, int **b, int *sizeb);
void	ft_sortboth(int **a, int *sizea, int **b, int *sizeb);
void	pushsortb(int **a, int *sizea, int **b, int *sizeb);
void	processchunk(int **a, int *sizea, int *chunkarr, int *chunk_size);
void	initiatesort(int **a, int *sizea, int **b, int *sizeb);
void	do_rra(int **a, int *sizea, int closeidxbtm);
void	do_ra(int **a, int *sizea, int closeidxtop);
void	sa(int *a, int size);
void	sb(int *b, int size);
void	ss(int *a, int sizea, int *b, int sizeb);
void	ra(int *a, int sizea);
void	rb(int *b, int sizeb);
void	rr(int *a, int sizea, int *b, int sizeb);
void	rra(int *a, int sizea);
void	rrb(int *b, int sizeb);
void	rrr(int *a, int sizea, int *b, int sizeb);
void	pb(int *a, int *sizea, int *b, int *sizeb);
void	pa(int *a, int *sizea, int *b, int *sizeb);
#endif
