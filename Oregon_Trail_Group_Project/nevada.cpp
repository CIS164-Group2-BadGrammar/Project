#include "nevada.h"

Nevada::Nevada()
{

}

bool Nevada::challenge(){
    int userChoice;
    cout << "You are getting close to your destination, but the team is getting hungry and getting weary. " << endl;
    cout << "Let's check to see if we have enough food for the team? Press 1 to Check. " << endl;
    cin >> userChoice;
    while(!cin || userChoice < 1 || userChoice > 1){
        cout << "Bad input, Try Again " << endl;
        cin.clear();
        cin.ignore();
        cin >> userChoice;
    }
    if(food > 0){
        cout << "You have " << food << " pounds of food. Just enough for the party " << endl;
        updateFood = (-1)*food;
        return true;
    }
    else{
        cout << "You have no food and the entire team has starved to death and you were not able to make it out of Nevada " << endl;
        return false;
    }

}

Nevada::~Nevada(){}
