#include <unistd.h>

void rush()
{
    int h = 4;
    int w = 5;
    char topside = '-';
    char botside = '-';
    char leftside = '|';
    char rightside = '|';
    char topleft = 'o';
    char topright = 'o';
    char botleft = 'o';
    char botright = 'o';
    char space = ' ';
    char newline = '\n';
    int x;
    int y;

    x = 0;
    y = 0;
    while (x < h)
    {
        y = 0;
        while (y < w)
        {
            if (x == 0)
            {
                if (y == 0)
                {
                    write(1, &topleft, 1);
                }
                else if (y == w - 1)
                {
                    write(1, &topright, 1);
                }
                else
                {
                    write(1, &topside, 1);
                }
            }
            else if (x == h - 1)
            {
                if (y == 0)
                {
                    write(1, &botleft, 1);
                }
                else if (y == w - 1)
                {
                    write(1, &botright, 1);
                }
                else
                {
                    write(1, &botside, 1);
                }
            }
            else
            {
                if (y == 0)
                {
                    write(1, &leftside, 1);
                }
                else if (y == w - 1)
                {
                    write(1, &rightside, 1);
                }
                else
                {
                    write(1, &space, 1);
                }
            }
            y++;
        }
        write(1, &newline, 1);
        x++;
    }
}
