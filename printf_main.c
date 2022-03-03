#include "ft_printf.h"
#include <stdio.h>

int    main(void)
{
    char    *str = NULL;
    unsigned int i = 26;
    ft_printf("%d\n", ft_printf("lol\n"));
    printf("%d\n", printf("lol\n"));
    ft_printf("%d\n", ft_printf("%s\n", str));
    printf("%d\n", printf("%s\n", str));
    ft_printf("%d\n", ft_printf("%s\n", "lol\n"));
    printf("%d\n", printf("%s\n", "lol\n"));
    ft_printf("%d\n", ft_printf("%p\n", str));
    printf("%d\n", printf("%p\n", str));
    ft_printf("%d\n", ft_printf("%u\n", i));
    printf("%d\n", printf("%u\n", i));
    ft_printf("%d\n", ft_printf("%x\n", i));
    printf("%d\n", printf("%x\n", i));
    ft_printf("%d\n", ft_printf("%c\n", 42));
    printf("%d\n", printf("%c\n", 42));
    ft_printf("%d\n", ft_printf("%d\n", -2147483648));
    printf("%d\n", printf("%ld\n", -2147483648));
    ft_printf("%d\n", ft_printf("%d\n", 0));
    printf("%d\n", printf("%d\n", 0));
    ft_printf("%d\n", ft_printf("%s%d%u%p\n", "42", 42, i, str));
    printf("%d\n", printf("%s%d%u%p\n", "42", 42, i, str));
    ft_printf("%d\n", ft_printf("%%%%%%%%%%%%s%%%%%d%%%%u%%%p\n", 42, str));
    printf("%d\n", printf("%%%%%%%%%%%%s%%%%%d%%%%u%%%p\n", 42, str));
}
