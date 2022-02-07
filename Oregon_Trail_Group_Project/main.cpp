// Andrew Steele, Reed James, Benjamin Lehmann, Calli Herr, Ryan Brockman
// Setup:
// Description: Text adventure game based off oregon trail.


#include <iostream>
#include <limits>
#include "person.h"
#include "equipment.h"
#include "gamelogic.h"
#include <stdlib.h>
using namespace std;


int main()
{

//    srand (15);
    int randNumResult;
    int numRange = 100;
    int negPosRange = 60;
    Person test1("John", "Doe", 45);
    GameLogic num1;

    randNumResult = num1.getRandomNumber(numRange, negPosRange);

    cout <<endl;
    test1.display();
    cout << "Random Num" << randNumResult << endl;

    return 0;
}


//Random Generator



//Scrapyard
/*
 *

    for(int i=0; i<top;i++){
        randNum = (rand()% numRange) -negPosRange;
        if(randNum > max){
            max = randNum;
        }
        if(randNum < min){
            min = randNum;
        }
        cout << "  " << randNum;
        if(i==(top/2)){
            cout<<endl;
        }
    }

    cout << "\nmax: " << max << endl;
    cout << "min: " << min << endl << endl;







 */
