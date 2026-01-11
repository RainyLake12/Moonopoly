#pragma once

struct street
{
    int updrageCost;
    int rent;
    int colorSetRent;
    int houseRent[4]; // For 1, 2, 3, 4 houses
    int hotelRent;
};

enum spaceTypes
{
    STREET, STATION, CHANCE, COMMUNITY_CHEST, FREE_PARKING,
    TAX, SUPER_TAX, ELECTRIC_COMPANY, WATER_WORKS, JAIL, GOTOJAIL, GO
};

enum spaceColors
{
    BLUE, DARK_BLUE, PINK, ORANGE, RED, YELLOW, GREEN, BROWN
};

struct space
{
    spaceTypes type;
    spaceColors color;
    street streetInfo;
    int upgradeLevel; // 1 for each house, 5 for each hotel
    int owner; // -1 for unowned
};