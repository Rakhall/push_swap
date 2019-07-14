/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstannis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 20:26:06 by sstannis          #+#    #+#             */
/*   Updated: 2019/03/30 20:26:09 by sstannis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

#include "libft/libft.h"
#include <stdlib.h>

typedef struct s_stack
{
    int     i;
    struct s_stack      *next;
    struct s_stack      *prev;
}   t_stack;




# endif
