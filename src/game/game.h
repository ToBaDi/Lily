#ifndef GAME_H
#define GAME_H

#define LEVEL_X_SIZE 32
#define LEVEL_Y_SIZE 8

struct Character
{
    char *name;
    int hp;
    int damage;
} typedef Character;

void game_debug();

#endif