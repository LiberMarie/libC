/*
** EPITECH PROJECT, 2020
** my_isneg
** File description:
** dire si un nombre est negatif ou non
*/

#include "lib.h"

int my_isneg(int n)
{
    if (n < 0)
        my_putchar('N');
    else
        my_putchar('P');
}