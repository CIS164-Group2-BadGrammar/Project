#ifndef GAMESTORY_H
#define GAMESTORY_H
#include <iostream>
#include <limits>
#include <vector>
#include "person.h"
#include "equipment.h"
#include "gamelogic.h"
#include <stdlib.h>

class GameStory
{
private:
//    struct partyData;
    vector<Person> _wagonParty;
    GameLogic gl;
    float _cash;
    int _difficulty;
public:
    GameStory();
    void GameSetup();
    int SetDifficulty();

    // Enter location
        // map of locations: nebraska, utah etc..
        // vector of events
    ~GameStory();

};

#endif // GAMESTORY_H
