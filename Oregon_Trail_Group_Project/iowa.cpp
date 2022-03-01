#include "iowa.h"

Iowa::Iowa()
{

}

bool Iowa::challenge(){
    int option;
    int farmerNumber = rand()%10+1;
    bool correct =false;
    int moneySpent = 0;
    cout << "Welcome to Iowa, a state known for the Cattle, Farmers and beautiful weather" << endl;
    cout << "You met this man, he is a farmer and is known for making bets and he wants to make a bet with you " << endl;
    cout << "If you win, he will give you an oxen, a perfect fit for your journey " << endl;
    cout << "Do you want to play (press 1 to start or 0 to quit)?" << endl;
    cin >> option;
    while(!cin || option >1 || option <0){
        cout << "Bad Input " << endl;
        cin.clear();
        cin.ignore();
        cin >> option;
    }
    if(option == 1){
        while(option == 1){
            if(moneySpent < money){
                moneySpent = moneySpent + 5;
                int userGuess;
                cout << "Guess the number (1 to 10) " << endl;
                cin >> userGuess;
                while(!cin || userGuess < 0 || userGuess > 10){
                    cout << "bad Input " << endl;
                    cin.clear();
                    cin.ignore();
                    cin >> userGuess;
                }
                if(userGuess == farmerNumber){
                    cout << "Congratulations! You have won your own oxen! Use it wisely " << endl;
                    updatedOx = 1;
                    updateMon = (-1)*moneySpent;
                    break;

                }
                else {
                    cout << "Sorry! That is the wrong numbers, do you want to guess again? (1 for Yes, 0 for No)" << endl;
                    cin >> userGuess;
                    while(!cin || userGuess < 0 || userGuess > 1){
                        cout << "Bad Input " << endl;
                        cin.clear();
                        cin.ignore();
                        cin >> userGuess;
                    }

                }
            }
            else{
                updateMon = (-1)*moneySpent;
                cout << "You do not have enough money " << endl;
                break;
            }
        }
    }
    else{
        cout << "You decided not to play and continued on your journey" << endl;
    }
    return true;

}

Iowa::~Iowa(){}
