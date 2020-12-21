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
};
