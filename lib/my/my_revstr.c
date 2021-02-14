/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** inverse le contenu d'une chaine de caractere
*/

#include "lib.h"

char *my_revstr(char *str)
{
    int i = 0;
    int j = 0;
    char x;

    while (str[i] != '\0'){
        i++;
    }
    while (j <= i/2){
        x = str[j];
        str[j] = str[i];
        str[i] = x;
        j++;
        i--;
    }
    return (str);
}