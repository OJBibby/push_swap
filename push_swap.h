/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibby <obibby@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 21:51:03 by obibby            #+#    #+#             */
/*   Updated: 2022/07/11 18:57:09 by obibby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"
#include <limits.h>

typedef struct s_info {
	int	moveno;
	int	size1;
	int	size2;
	int	max1;
	int	max2;
	int	min1;
	int	min2;
	int	sort;
}	t_info;

int		smallsort(int *stack1, int *stack2, int size);
int		push_to(int *src, int *dest, int ssize, int dsize);
void	stack_rotate(int *stack, int size, int dir, char *str);
void	swap(int *stack, char *str);
int		find_min(int *stack, int size);
int		find_max(int *stack, int size);
int		checkinput(char **argv, int size);
int		meansort(int *stack1, int *stack2, int mean, t_info *info);
int		check_sorted(int *stack, int size, int n);
void	recombine_a(int *stack1, int *stack2, t_info *info);
void	swap_both(int *stack1, int *stack2);
void	stack_shift(int *stack, int size, int dir);
int		meansortb(int *stack1, int *stack2, int count, t_info *info);

#endif