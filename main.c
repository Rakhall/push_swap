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

#include "push_swap.h"
#include <stdio.h>

void    error(void)
{
    write(1, "Error\n", 6);
    exit (0);
}

int     ft_isnumber(char *str)
{
    int i;

    if (!str)
        return (0);
    i = 0;
    while (str[i])
    {
        if (str[i] == '-')
        {
            if (i == 0)
            {
                i++;
                continue ;
                }
            else
                return (0);
        }
        if (!ft_isdigit(str[i]))
            return (0);
        i++;
      }
      return (1);
}

t_stack     *new_itemstack(int nbr)
{
    t_stack     *new;

    new = malloc(sizeof(t_stack));
    new->i = nbr;
    new->next = NULL;
    return (new);
}

void    dublicates(t_stack *sta)
{
    int     i;
    t_stack *tmp;

    i = sta->i;
    tmp = sta->next;
    while (sta && sta->next)
    {
        if (sta->i > 2147483647 || sta->i < -2147483648)
		    error();
        while (tmp)
        {
            if (i == tmp->i)
                error();
            tmp = tmp->next;
        }
        sta = sta->next;
        i = sta->i;
        tmp = sta->next;
    }
}

void	checker(char **av)
{
	t_stack		*sta;
    t_stack		*stb;
    int         i;

    i = 0;
    if (!ft_isnumber(av[i]))
        error();
    sta = new_itemstack(atoi(av[i++]));
    stb = sta;
    while(av[i])
    {
            if (!ft_isnumber(av[i]))
                error();
            sta->next = new_itemstack(atoi(av[i++]));
            sta = sta->next;
    }
    sta = stb;
    stb = NULL;
    dublicates(sta);
    while(get_next_line)
    while(sta)
    {
        printf("%d\n", sta->i);
        sta = sta->next;
    }
}

int		main(int ac, char **av)
{
    if (ac < 2)
        error() ;
    else
    {
        checker(&av[1]);    
    }
    return (0);
}
