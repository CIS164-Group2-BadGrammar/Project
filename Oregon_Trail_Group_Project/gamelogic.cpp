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

void GameLogic::createWagonParty(vector<Person> &party, bool quickStart){
    string fName, lName, promptString;
    int age;
    if(!quickStart){
        cout << "What is your first Name? " << endl;
        cin >> fName;
        cout << "What is your Last Name? " << endl;
        cin >> lName;
        cout << "What is your Age Name? " << endl;
        age = userInputValidation(age);
        Person user(fName, lName, age, false);
        party.push_back(user);
        cout << "How many people in your party? " << endl;
        cin >> _peopleInParty;
        for(int i=1; i< _peopleInParty; i++){
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
    } else {

        Person John("John", "Smith", 45, true);
        Person Sarah("Sarah", "Smith", 43, true);
        Person Billy("Billy", "Smith", 15, true);
        Person Emma("Emma", "Smith", 12, true);
        party.push_back(John);
        party.push_back(Sarah);
        party.push_back(Billy);
        party.push_back(Emma);
    }
}

void GameLogic::displayWagonParty(vector<Person> party){
    for(unsigned int i = 0; i < party.size(); i++){
        party[i].display();
    }
};

GameLogic::~GameLogic(){};
