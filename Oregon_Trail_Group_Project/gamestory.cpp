#include "gamestory.h"

//struct GameStory::partyData {

//};

GameStory::GameStory()
{
    GameSetup();

    // Set starting cash based on difficulty
    // States array (or vec) that calls constructor to initialize events
    // state.runState to call while loop for gameplay
    // Call Nebraska class
        // pass by ref wagon party
        // while loop in stateLocation
            // (miles < stateWidth)
            // Break if (health <= 0)
        // Use events call random events here
            // multimap of

    // Classes that need to be made:
        // Event (created, needs coded out)
        // Equipment ( use in place of inventory, Needs to be filled out)
            // Creates initial store, outpost, and wagonInventory objects
            // Buy Inventory - Wagon, Horses, food, cloths, weapon ammo
            // takes params for all inventory
            // sets prices based on dificulty
}


void GameStory::GameSetup(){
    int userQuick;
    cout << "Choose between quickstart or full game: "
         << "\n\t1 = Quick Start"
         << "\n\t2 = Full Game" << endl;
    userQuick = userInputValidation(userQuick, QUICK_START, FULL_GAME);
    userQuick == FULL_GAME ?_difficulty = SetDifficulty() : _difficulty = MEDIUM;
    gl.createWagonParty(_wagonParty, (userQuick == QUICK_START));
    gl.displayWagonParty(_wagonParty);
    partyInv.generateBaseUserInventory();
    partyInv.displayInventory();
}

int GameStory::SetDifficulty(){
    cout << "Select difficulty: "
         << "\n\t1 = Easy"
         << "\n\t2 = Medium"
         << "\n\t3 = Hard" << endl;
    return userInputValidation(_difficulty, EASY, HARD);
}

GameStory::~GameStory(){}
