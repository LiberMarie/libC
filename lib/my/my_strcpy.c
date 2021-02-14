/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
** copie une chaine dans une autre
*/

#include "lib.h"

char *my_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}