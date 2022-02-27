#include "gamestory.h"

//struct GameStory::partyData {

//};

GameStory::GameStory()
{
    //SetDifficulty(); //user firsts selects diffulty
    // Set starting cash based on difficulty
    GameSetup(); // Maybe make own class
        // Create Wagon Party
        // Might wanna add fields to Person for user vs npc
        // isUser bool,
    // "Press any Key to Start"
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
         << "\n\t1 = full game"
         << "\n\t2 = quickstart" << endl;
    userQuick = userInputValidation(userQuick, 1, 2);
    userQuick == 1 ?_difficulty = SetDifficulty() : _difficulty = 2;
    gl.createWagonParty(_wagonParty, (userQuick == 2));
    gl.displayWagonParty(_wagonParty);

}

int GameStory::SetDifficulty(){
    cout << "Select difficulty: "
         << "\n\t1 = Easy"
         << "\n\t2 = Medium"
         << "\n\t3 = Hard" << endl;
    return userInputValidation(_difficulty, 1, 3);
}

GameStory::~GameStory(){}
