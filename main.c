
#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int main(void)
{
    int a;
    int b;
    int x;

    x = 42;

    printf("\n========== BASIC TESTS ==========\n");
    a = ft_printf("Hello World!\n");
    b = printf("Hello World!\n");
    printf("Return: ft=%d | printf=%d\n", a, b);

    printf("\n========== CHARACTERS ==========\n");
    a = ft_printf("Char: %c\n", 'A');
    b = printf("Char: %c\n", 'A');
    printf("Return: ft=%d | printf=%d\n", a, b);

    a = ft_printf("Null char: %c END\n", '\0');
    b = printf("Null char: %c END\n", '\0');
    printf("Return: ft=%d | printf=%d\n", a, b);

    printf("\n========== STRINGS ==========\n");
    a = ft_printf("String: %s\n", "1337");
    b = printf("String: %s\n", "1337");
    printf("Return: ft=%d | printf=%d\n", a, b);

    a = ft_printf("Empty: %s END\n", "");
    b = printf("Empty: %s END\n", "");
    printf("Return: ft=%d | printf=%d\n", a, b);

    a = ft_printf("NULL: %s END\n", (char *)NULL);
    b = printf("NULL: %s END\n", (char *)NULL);
    printf("Return: ft=%d | printf=%d\n", a, b);

    printf("\n========== SIGNED INTEGERS ==========\n");
    a = ft_printf("Zero: %d\n", 0);
    b = printf("Zero: %d\n", 0);
    printf("Return: ft=%d | printf=%d\n", a, b);

    a = ft_printf("Negative: %d\n", -42);
    b = printf("Negative: %d\n", -42);
    printf("Return: ft=%d | printf=%d\n", a, b);

    a = ft_printf("INT_MAX: %d\n", INT_MAX);
    b = printf("INT_MAX: %d\n", INT_MAX);
    printf("Return: ft=%d | printf=%d\n", a, b);

    a = ft_printf("INT_MIN: %d\n", INT_MIN);
    b = printf("INT_MIN: %d\n", INT_MIN);
    printf("Return: ft=%d | printf=%d\n", a, b);

    a = ft_printf("Integer: %i\n", 12345);
    b = printf("Integer: %i\n", 12345);
    printf("Return: ft=%d | printf=%d\n", a, b);

    printf("\n========== UNSIGNED INTEGERS ==========\n");
    a = ft_printf("Unsigned zero: %u\n", 0u);
    b = printf("Unsigned zero: %u\n", 0u);
    printf("Return: ft=%d | printf=%d\n", a, b);

    a = ft_printf("UINT_MAX: %u\n", UINT_MAX);
    b = printf("UINT_MAX: %u\n", UINT_MAX);
    printf("Return: ft=%d | printf=%d\n", a, b);

    printf("\n========== HEXADECIMAL ==========\n");
    a = ft_printf("Lower: %x\n", 255u);
    b = printf("Lower: %x\n", 255u);
    printf("Return: ft=%d | printf=%d\n", a, b);

    a = ft_printf("Upper: %X\n", 255u);
    b = printf("Upper: %X\n", 255u);
    printf("Return: ft=%d | printf=%d\n", a, b);

    a = ft_printf("Hex zero: %x\n", 0u);
    b = printf("Hex zero: %x\n", 0u);
    printf("Return: ft=%d | printf=%d\n", a, b);

    a = ft_printf("Hex UINT_MAX: %x\n", UINT_MAX);
    b = printf("Hex UINT_MAX: %x\n", UINT_MAX);
    printf("Return: ft=%d | printf=%d\n", a, b);

    printf("\n========== POINTERS ==========\n");
    a = ft_printf("Pointer: %p\n", (void *)&x);
    b = printf("Pointer: %p\n", (void *)&x);
    printf("Return: ft=%d | printf=%d\n", a, b);

    a = ft_printf("NULL pointer: %p\n", (void *)NULL);
    b = printf("NULL pointer: %p\n", (void *)NULL);
    printf("Return: ft=%d | printf=%d\n", a, b);

    printf("\n========== PERCENTAGE ==========\n");
    a = ft_printf("Percent: %%\n");
    b = printf("Percent: %%\n");
    printf("Return: ft=%d | printf=%d\n", a, b);

    a = ft_printf("Multiple: %%%%%%\n");
    b = printf("Multiple: %%%%%%\n");
    printf("Return: ft=%d | printf=%d\n", a, b);

    printf("\n========== MIXED CONVERSIONS ==========\n");
    a = ft_printf("%s is %d years old. Score: %x%%\n",
            "Saad", 21, 1337);
    b = printf("%s is %d years old. Score: %x%%\n",
            "Saad", 21, 1337);
    printf("Return: ft=%d | printf=%d\n", a, b);

    printf("\n========== EMPTY FORMAT ==========\n");
    a = ft_printf("");
    b = printf("");
    printf("Return: ft=%d | printf=%d\n", a, b);

    return (0);
}

