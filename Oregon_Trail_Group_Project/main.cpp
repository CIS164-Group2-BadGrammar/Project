// Andrew Steele, Reed James, Benjamin Lehmann, Calli Herr, Ryan Brockman
// Setup:
// Description: Text adventure game based off oregon trail.


#include <iostream>
#include <limits>
#include "person.h"
#include "equipment.h"
#include "gamelogic.h"
#include <stdlib.h>
using namespace std;


int main()
{

    int randNumResult;
    int numRange = 100;
    int negPosRange = 60;
    Person test1("John", "Doe", 45);
    GameLogic num1;

    randNumResult = num1.getRandomNumber(numRange, negPosRange);

    cout <<endl;
    test1.display();
    cout << "Random Num" << randNumResult << endl;
    return 0;
}

