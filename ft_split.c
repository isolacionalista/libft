/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:31:15 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/10 14:04:11 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int contador(char const *s, char c)
{
    int i;
    int trigger;

    i = 0;
    trigger = 0;
    while (*s)
    {
        if (*s != c && trigger == 0)
        {
            trigger = 1;
            i++;
        }
        if (*s == c)
            trigger = 0;
        s++;
    }
    return (i);
}

static char *duplicador(char const *str, int strt, int end)
{
    char *palavra;
    int i;

    i = 0;
    palavra = malloc(((end - strt) + 1) * sizeof(char));
    if (!palavra)
        return (0);
    while (strt < end)
        palavra[i++] = str[strt++];
    palavra[i] = '\0';
    return (palavra);
}

//char **ft_split(char const *s, char c)
//{
//    char **split;
//    size_t i;
//    size_t f;
//    size_t len;
//    int index;
//
//    f = 0;
//    i = 0;
//    len = ft_strlen(s);
//    split = malloc((contador(s, c) + 1) * sizeof(char *));    
//    index = -1;
//    if (!s || !split)
//        return (NULL);
//    while (i <= len)
//    {
//        if (s[i] != c && index < 0)
//            index = i;
//        if ((s[i] == c || i == len) && index >= 0)
//        {
//            split[f++] = duplicador(s, index, i);
//            index = -1;
//        }
//        i++;
//    }
//    split[f] = NULL;
//    return (split);
//}

#include <stdio.h>

//int main()
//{
//    char **tmp = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
//    int i = -1;
//    while (tmp[++i])
//        printf("%s\n", tmp[i]);
//    return 0;
//}

char **ft_split(char const *s, char c)
{
    char **split;
    int i;
    int f;
//    size_t len;
    int index;

    f = 0;
    i = 0;
//    len = ft_strlen(s);
    split = malloc((contador(s, c) + 1) * sizeof(char *));    
    index = 0;
    if (!s || !split)
        return (NULL);
    while (i < ft_strlen(s))
    {
        while (s[i] == c)
            i++;
        index = i;
        while (s[i] != c && s[i])
            i++;
        if (s[i] || i > index)
            split[f++] = duplicador(s, index, i);
    }
    split[f] = NULL;
    return (split);
}