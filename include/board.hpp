#pragma once
#include <spaces.hpp>
#include <player.hpp>

struct board
{
    space spaces[40];
    int numberOfPlayers;
    player players[8];
};