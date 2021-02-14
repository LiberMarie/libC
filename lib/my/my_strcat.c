/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** my_strcat
*/

#include "lib.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int lenght = 0;

    while (dest[lenght] != '\0')
        lenght++;
    while (src[i] != '\0'){
        dest[lenght] = src[i];
        lenght++;
        i++;
    }
    dest[lenght] = '\0';
    return (dest);
}