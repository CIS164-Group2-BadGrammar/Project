#include <iostream>
#include "Nebraska.h"
using namespace std;

//Create a Storm scenario, cold and maybe a tornado

Nebraska::Nebraska(){
    miles = 100;
    state = "Nebraska";
    updateAmmo = 0;
    updateClothes = 0;
    updateFood = 0;
    updateGroup = 0;
    updateMon = 0;

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
    cout << "You have " << clothes << "Amount of Clothes for the Group" << endl;
    if(clothes < group){
        cout << "There is a problem, there is not enough pieces of clothes for the whol group" << endl;
        cout << "There is " << clothes << " peices out of  " << group << " Members of the group" << endl;
    }
    else {
        cout << "Every members has gotten their clothes and for that they are properly prepared for the strong weather " << endl;
    }
    return true;
};