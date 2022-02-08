// Andrew Steele, Reed James, Benjamin Lehmann, Calli Herr, Ryan Brockman
// Setup:
// Description: Text adventure game based off oregon trail.


#include <iostream>
#include <limits>
#include <vector>
#include "person.h"
#include "equipment.h"
#include "gamelogic.h"
#include <stdlib.h>
using namespace std;


int main()
{

    vector<Person> wagonParty;
    vector<Person> wagonParty2;
    GameLogic gl;

    Person John("John", "Smith", 45);
    Person Sarah("Sarah", "Smith", 43);
    Person Billy("Billy", "Smith", 15);

    wagonParty.push_back(John);
    wagonParty.push_back(Sarah);
    wagonParty.push_back(Billy);

    gl.displayWagonParty(wagonParty);

    gl.createWagonParty(wagonParty2);
    gl.displayWagonParty(wagonParty2);

    return 0;
}



