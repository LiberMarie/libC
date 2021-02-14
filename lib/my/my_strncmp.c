/*
** EPITECH PROJECT, 2020
** my_strnncmp
** File description:
** compare n caractere dune et d'une autre
*/

#include "lib.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while ( i < n){
        for (; s1[i] != '\0' || s2[i] != '\0' && i < n;i++){
            if (s1[i] != s2[i])
                return (s1[i] - s2[i]);
        }
    }
    return (0);
}
