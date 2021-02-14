/*
** EPITECH PROJECT, 2021
** my_amazing_sorter
** File description:
** affiche les instructions de trie
*/
#include <unistd.h>
void my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;

    write (1, str, i);
}
