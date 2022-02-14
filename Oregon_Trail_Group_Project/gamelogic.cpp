#include "gamelogic.h"
#include "person.h"
#include <string>
#include <iomanip>
using namespace std;
GameLogic::GameLogic()
{
}

int GameLogic::getRandomNumber(){
    int randNum;
    _numRange = 100;
    _negPosRange = 0;

    srand((unsigned)time(0));
    randNum = (rand()% _numRange+1) -_negPosRange;

    return randNum;
}

int GameLogic::getRandomNumber(int valueRange, int goodBadRange){
    int randNum;
    _numRange = valueRange;
    _negPosRange = goodBadRange;

    srand((unsigned)time(0));
    randNum = (rand()% _numRange) -_negPosRange;

    return randNum;
}

void GameLogic::createWagonParty(vector<Person> &party){

    cout << "How many people in your party? " << endl;
    cin >> _peopleInParty;

    for(int i=0; i< _peopleInParty; i++){
        string fName, lName;
        int age;
        Person person;
        cout << "Please enter first Name: " << endl;
        cin >> fName;
        person.setFirstName(fName);
        cout << "Please enter last Name: " << endl;
        cin >> lName;
        person.setLastName(lName);
        cout << "Please enter age Name: " << endl;
        cin >> age;
        person.setAge(age);
        party.push_back(person);
    }
}

void GameLogic::displayWagonParty(vector<Person> party){
    int partySize = party.size();
    for(int i = 0; i < partySize; i++){
        party[i].display();
    }
};

GameLogic::~GameLogic(){};
