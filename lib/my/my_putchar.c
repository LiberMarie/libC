/*
** EPITECH PROJECT, 2020
** my_putchar
** File description:
** my_putchar
*/

#include "lib.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
