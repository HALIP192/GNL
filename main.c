#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main(void)
{
    int fd = open("../42_with_nl", O_RDWR);
    printf("%s", get_next_line(fd));
    //char c = 0; read(fd, &c, 1);
    //if (c == '1')
      //  printf("%c", c);
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    close(fd);
    return (0);
}

