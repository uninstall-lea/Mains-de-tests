#include <stdio.h>
#include "get_next_line.h"

int    main(int ac, char **av)
{
    int        fd;
    char    *s1;

    (void) ac;
    fd = open(av[1], O_RDONLY);
    while ((s1 = get_next_line(fd)) != NULL)
    {
        printf("%s", s1);
        free(s1);
    }
    close(fd);
    return (0);
}
