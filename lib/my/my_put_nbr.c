/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** affiche le nombre donné
*/

#include "lib.h"

int my_put_nbr(int nb)
{
    int diviseur = 1;
    int i;

    if (nb < 0){
        my_putchar('-');
        nb = nb * (-1);
    }

    while (nb / diviseur >= 10)
        diviseur = diviseur * 10;

    while (diviseur >= 1){
        i = nb / diviseur % 10;
        my_putchar(i + 48);
        diviseur = diviseur / 10;
    }
}