#ifndef GAMESTORY_H
#define GAMESTORY_H
#include <iostream>
#include <limits>
#include <vector>
#include "person.h"
#include "equipment.h"
#include "gamelogic.h"
#include "inventory.h"
#include <stdlib.h>

class GameStory
{
private:
    const int QUICK_START = 1, FULL_GAME = 2, EASY = 1, MEDIUM = 2, HARD = 3;
    vector<Person> _wagonParty;
    GameLogic gl;
    Inventory partyInv;
    float _cash;
    int _difficulty;
public:
    GameStory();
    void GameSetup();
    int SetDifficulty();
    void setInitialCash();
    ~GameStory();

};

#endif // GAMESTORY_H
