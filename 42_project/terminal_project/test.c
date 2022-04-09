/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassine <yassine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 15:50:24 by yassine           #+#    #+#             */
/*   Updated: 2022/04/06 17:04:45 by yassine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_putstr(char a[])
{
         int i;
         i = 0;
         while(a[i] != '\0')
         {       
                ft_putchar(a[i]);
                i = i + 1;
         }
		
}

int main(void)
{
	ft_putstr("yassine 1337 tetoune");
}
