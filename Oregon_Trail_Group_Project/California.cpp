#include <iostream>
#include <cstdlib>
#include "Cali.h"
using namespace std;

California::California(){
    miles = 100;
    state = "California";
    updateMiles = 0;
    updateAmmo = 0;
    updateClothes = 0;
    updateGroup = 0;
    updateMon = 0;

}
bool California::challenge(){
    string userInput;
    cout << "You have made it to your final Destination!" << endl;
    cout << "Congratulations! All of your members have made it! " << endl;
}