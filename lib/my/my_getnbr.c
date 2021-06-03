/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** transforme un nombre donner dans une chaine de caractere en nombre(int)
*/

#include "lib.h"

int my_getnbr(char const *str)
{
    int i = 0;
    int nb = 0;
    int neg = 1;

    for (i = 0; str[i] == '-' || str[i] == '+'; i++)
        if (str[i] == '-')
            neg = neg * -1;
    for (i; str[i] >= '0' && str[i] <= '9'; i++) {
            nb = nb * 10;
            nb += (str[i] - '0');
    }
    nb *= neg;
    return (nb);
}

int main (void)
{
    return (0);
}