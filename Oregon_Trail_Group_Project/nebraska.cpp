#include "nebraska.h"

Nebraska::Nebraska()
{
    _miles = 100;
    _state = "Nebraska";
    _updateAmmo = 0;
    _updateClothes = 0;
    _updateFood = 0;
    _updateGroup = 0;
    _updateMon = 0;
}

bool Nebraska::challenge(){
    cout << "It starts to rain heavily and there are thunderstorms nearby" << endl;
    cout << "The Temp is starting to drop and there is a strong gust of wind and it is getting cold" << endl;
    cout << "Do you have the right clothing for this weather? To continue press y" << endl;
    char userInput;
    cin >> userInput;
    while(userInput == 'n' || userInput == 'N'){
        cout << "Done" << endl;
        cin.clear();
    }
    cout << endl;
    cout << "You have " << _updateClothes << "Amount of Clothes for the Group" << endl;
    if(_updateClothes < _updateGroup){
        cout << "There is a problem, there is not enough pieces of clothes for the whol group" << endl;
        cout << "There is " << _updateClothes << " peices out of  " << _updateGroup << " Members of the group" << endl;
    }
    else {
        cout << "Every members has gotten their clothes and for that they are properly prepared for the strong weather " << endl;
    }
    return true;
};

Nebraska::~Nebraska(){}


