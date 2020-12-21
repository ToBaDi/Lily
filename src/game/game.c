#include <stdio.h>
#include "game.h"

void game_debug()
{
    Level level_1;
    int x = 0, y = 0;

    y = 0;
    while (y < LEVEL_Y_SIZE)
    {
        x = 0;
        while (x < LEVEL_X_SIZE)
        {
            level_1[x][y] = '#';
            x++;
        }
        y++;
    }

    y = 0;
    while (y < LEVEL_Y_SIZE)
    {
        x = 0;
        while (x < LEVEL_X_SIZE)
        {
            printf("%c", level_1[x][y]);
            x++;
        }
        printf("\n");
        y++;
    }
}