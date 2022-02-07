#include <iostream>
#ifndef GAMELOGIC_H
#define GAMELOGIC_H


class GameLogic
{
private:
    int numRange;
    int negPosRange;
public:
    GameLogic();
    int getRandomNumber(int, int);
    ~GameLogic();
};

#endif // GAMELOGIC_H
