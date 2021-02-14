/*
** EPITECH PROJECT, 2020
** my_is_prime
** File description:
** return 1 si le nombre est un nombre premier, sinon return 0
*/

#include "lib.h"

int my_is_prime(int nb)
{
    int i = 0;

    for (int j = 1; j <= nb; j++)
    {
        if (nb % j == 0)
            i++;
    }
    if (i > 2)
        return (0);
    else
        return (1);
}