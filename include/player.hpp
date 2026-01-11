#pragma once

struct player
{
    int position; // GO : 0, counts up from go, -1 is in jail, the actual position of the jail is just visiting
    int balance;
};

void advance(player p, int spaces);