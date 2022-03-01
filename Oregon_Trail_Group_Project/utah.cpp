#include "utah.h"

Utah::Utah()
{

}

bool Utah::challenge(){
    int user;
    cout << "Uh-oh! You are caught in a shootout within the mountains and your team needs to make sure you have the ammo " << endl;
    cout << "You need to make sure you have the ammo, do you have the ammo? Press 1 to start. " << endl;
    cin >> user;
    while(!cin || user < 1 || user > 2 ){
        cout << "Bad Input. Try again " << endl;
        cin.clear();
        cin.ignore();
        cin >> user;
    }
    cout << endl;
    if(ammo > 0){
        cout << "You have " << ammo << " rounds of ammo. You are locked and loaded " << endl;
        updateAmmo = (-1)*ammo;
        return true;
    }
    else{
        cout << "The worst of luck, you have no ammo and your entire group has been eliminated " << endl;
        return false;
    }

}

Utah::~Utah(){}
