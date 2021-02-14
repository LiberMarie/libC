/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** printf
*/

#include "lib.h"

void my_str(va_list *my_list)
{
    char *src = va_arg(*my_list, char *);
    write (1, src, my_strlen(src));
}

void my_int (va_list *my_list)
{
    int d = va_arg (*my_list, int);
    my_put_nbr(d);
}

void my_char (va_list *my_list)
{
    char c = va_arg(*my_list, int);
    write(1, &c, 1);
}

void my_printf (char *src, ...)
{
    va_list my_list;
    int i = 0;

    va_start (my_list, src);
    for (i = 0; src[i] != 0; i++){
        if (i != 0 && src[i - 1] == '%'){
            if (src[i] == 'c')
                my_char(&my_list);
            if (src[i] == 's')
                my_str(&my_list);
            if (src[i] == 'd' || src[i] ==  'i')
                my_int(&my_list);
            if (src[i] == '%'){
                my_putchar('%');
            }
        }
        else if (src[i] != '%')
            write (1, &src[i], 1);
    }
}
