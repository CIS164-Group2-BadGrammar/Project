#include <iostream>
#include <vector>
#include "person.h"
#ifndef GAMELOGIC_H
#define GAMELOGIC_H


class GameLogic
{
private:
    int _numRange;
    int _negPosRange;
    int _peopleInParty;
public:
    GameLogic();
    int getRandomNumber();
    int getRandomNumber(int, int);
    void createWagonParty(vector<Person> &party);
    void displayWagonParty(vector<Person> party);
    ~GameLogic();
};

#endif // GAMELOGIC_H
