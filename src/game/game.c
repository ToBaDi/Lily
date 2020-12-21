#include "game.h"

struct Vec2
{
    int x;
    int y;
} typedef Vec2;

struct Character
{
    char *name;
    Vec2 pos;
    int hp;
    int damage;
} typedef Character;

#define LEVEL_X_SIZE 32
#define LEVEL_Y_SIZE 8
typedef char Level[LEVEL_X_SIZE][LEVEL_Y_SIZE];

#include <stdio.h>
int main()
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

    return 0;
}