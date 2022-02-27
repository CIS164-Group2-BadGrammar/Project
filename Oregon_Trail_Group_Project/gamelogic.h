#include <iostream>
#include <vector>
#include "person.h"
#include<limits>
#include<ios>
#ifndef GAMELOGIC_H
#define GAMELOGIC_H
using namespace std;
template<typename T>
T &userInputValidation(T &cinVal, T lowRange = -10000, T highRange = 10000){
    while(true){
        if(cin >> cinVal){
            if(cinVal >= lowRange && cinVal <= highRange){
                break;
            }
            else {
                cout << "please select a correct choice between " << lowRange << " and " << highRange << endl;
            }
        } else {
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
        }
        cout << "Please enter correct input" << endl;
    }

    return cinVal;
};
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
    void createWagonParty(vector<Person> &party, bool);
    void displayWagonParty(vector<Person> party);
    ~GameLogic();
};

#endif // GAMELOGIC_H
