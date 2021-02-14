/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** compare deux chaine de caractere.
*/

#include "lib.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    for (; s1[i] != '\0' || s2[i] != '\0';i++){
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
    }
    return (0);
}
