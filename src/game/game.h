#ifndef GAME_H
#define GAME_H

#define LEVEL_X_SIZE 32
#define LEVEL_Y_SIZE 8

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

typedef char Level[LEVEL_X_SIZE][LEVEL_Y_SIZE];

void game_debug();

#endif