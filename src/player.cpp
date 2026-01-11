#include <player.hpp>
#include <board.hpp>
#include <spaces.hpp>
#include <math.h>

void advance(player p, int spaces, board b)
{
    int oldPos = p.position;
    p.position += spaces;

    if (oldPos > p.position)
    {
        p.balance += 200; // Give $200 if you pass GO
    }

    space newSpace = b.spaces[p.position];
    // TODO: finish logic for landing on spaces
    switch (newSpace.type)
    {
    case CHANCE:

    break;
    case COMMUNITY_CHEST:

    break;
    case STREET:
        if (newSpace.owner > -1)
        {
            street streetInfo = newSpace.streetInfo;
            int upgradeLevel = newSpace.upgradeLevel;
            int houses = upgradeLevel % 5;
            int hotels = floor(upgradeLevel / 5.0);

            int rent = streetInfo.rent;
            // TODO: implement color set rent
            if (upgradeLevel > 0)
            {
                if (houses > 0) rent += streetInfo.houseRent[houses];
                if (hotels > 0) rent += streetInfo.hotelRent * hotels;
            }
        }
    break;
    case STATION:

    break;
    case TAX:
        p.balance -= 200;
    break;
    case SUPER_TAX:
        p.balance -= 100;
    break;
    case ELECTRIC_COMPANY:

    break;
    case WATER_WORKS:

    break;
    case GOTOJAIL:
        p.position = -1;
    break;
    
    default:
        break;
    }
}