/*
** EPITECH PROJECT, 2020
** lib.h
** File description:
** lib.h
*/

#ifndef MY_H_
#define MY_H_

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

int my_compute_power_rec(int nb, int p);
int my_getnbr(char const *str);
int my_is_prime(int nb);
int my_isneg(int n);
void my_str(va_list *my_list);
void my_int(va_list *my_list);
void my_char(va_list *my_list);
void my_printf (char *src, ...);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);
char *my_strcat(char *dest, char const *src);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strcpy(char *dest, char *src);
int my_strlen(char const *str);
int my_strncmp(char const *s1, char const *s2, int n);
int my_strncmp(char const *s1, char const *s2, int n);

#endif