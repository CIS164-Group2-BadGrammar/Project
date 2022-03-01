#include "colorado.h"

Colorado::Colorado()
{

}

bool Colorado::challenge(){
    cout << "You have made it to Colorado, but beware, the entire territory is very rocky and has many mountains to cross " << endl;
    cout << "You realize you may have to lighten the load in order to cross these terrains and has to be less than 3000 pounds " << endl;
    if(pound > 3000){
        cout << "Your Wagon weighs too much and you can't cross these terrains " << endl;
        return false;
    }
    else{
        cout << "The Wagon weighs about right! Now you can continue on your journey with no problems! " << endl;
        return true;
    }
}

Colorado::~Colorado(){}
