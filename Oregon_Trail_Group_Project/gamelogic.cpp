#include "gamelogic.h"
#include <string>
#include <iomanip>
using namespace std;
GameLogic::GameLogic()
{
    numRange = 100;
    negPosRange = 0;
}


int GameLogic::getRandomNumber(int valueRange, int goodBadRange){
    int randNum;
    numRange = valueRange;
    negPosRange = goodBadRange;

    srand((unsigned)time(0));
    randNum = (rand()% numRange) -negPosRange;

    return randNum;
}

GameLogic::~GameLogic(){};
