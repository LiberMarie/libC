/*
** EPITECH PROJECT, 2020
** my_compute_power_rec
** File description:
** retourne la puissance donner en 2e arg d'un nombre donner en en 1er arg
*/

#include "lib.h"

int my_compute_power_rec(int nb, int p)
{
    if (p == 0){
        nb = 1;
        return (nb);
    }
    if (p < 0){
        return (0);
    }
    if (p > 0){
        nb = nb * my_compute_power_rec(nb, p - 1);
    }
    return (nb);
}