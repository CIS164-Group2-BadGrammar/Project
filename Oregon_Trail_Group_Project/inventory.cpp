#include "inventory.h"

Inventory::Inventory()
{
    genrateFoodVec();
    genrateWagonVec();
    genrateHorsesVec();
    genrateWeaponVec();
    genrateAmmoVec();
    genrateClothsVec();
}

Inventory::Inventory(int difficulty){
    if(difficulty == 1){

    }
    else if(difficulty == 2){

    }
    else{

    }
}

void Inventory::genrateFoodVec(){
    Equipment badFood("Bad Food");
    Equipment normalFood("Normal Food");
    Equipment goodFood("Good Food");
    _food.push_back(badFood);
    _food.push_back(normalFood);
    _food.push_back(goodFood);
}
void Inventory::genrateWagonVec(){
    Equipment badWagon("Bad Wagon");
    Equipment normalWagon("Normal Wagon");
    Equipment goodWagon("Good Wagon");
    _wagon.push_back(badWagon);
    _wagon.push_back(normalWagon);
    _wagon.push_back(goodWagon);
}
void Inventory::genrateHorsesVec(){
    Equipment normalHorse("Normal Horse");
    Equipment ox("Ox");
    Equipment workHorse("Work Horse");
    _horses.push_back(normalHorse);
    _horses.push_back(ox);
    _horses.push_back(workHorse);
}
void Inventory::genrateWeaponVec(){
    Equipment slingShot("Sling Shot");
    Equipment pistal("Pistal");
    Equipment rifle("Rifle");
    _weapon.push_back(slingShot);
    _weapon.push_back(pistal);
    _weapon.push_back(rifle);
}
void Inventory::genrateAmmoVec(){
    Equipment lowGrade("Low Grade");
    Equipment medGrade("Medium Grade");
    Equipment highGrade("High Grade");
    _ammo.push_back(lowGrade);
    _ammo.push_back(medGrade);
    _ammo.push_back(highGrade);

}
void Inventory::genrateClothsVec(){
    Equipment summer("Summer");
    Equipment winter("Winter");
    Equipment yearRound("Year Round");
    _cloths.push_back(summer);
    _cloths.push_back(winter);
    _cloths.push_back(yearRound);

}

void Inventory::setFood(){}
void Inventory::setWagon(){}
void Inventory::setHorses(){}
void Inventory::setWeapon(){}
void Inventory::setAmmo(){}
void Inventory::setCloths(){}

void Inventory::generateBaseUserInventory(){
    int counter = 1;
    _inventoryRow.insert(pair<string, vector<Equipment>>(_foodLabel, _food));
    _inventoryRow.insert(pair<string, vector<Equipment>>(_wagonLabel, _wagon));
    _inventoryRow.insert(pair<string, vector<Equipment>>(_horseLabel, _horses));
    _inventoryRow.insert(pair<string, vector<Equipment>>(_weaponLabel, _weapon));
    _inventoryRow.insert(pair<string, vector<Equipment>>(_ammoLabel, _ammo));
    _inventoryRow.insert(pair<string, vector<Equipment>>(_clothsLabel, _cloths));

    for(auto& i : _inventoryRow){
        for(auto& j : i.second){
            j.setItemId(counter);
            counter++;
        }
    }
}

void Inventory::userMakePurchase(){}

void Inventory::displayInventory(){
    stringstream row1, row2, row3, row4;
    int formatWidth = 12;
    for(auto& i : _inventoryRow){
        cout << setfill('_') << setw( 7 *formatWidth) << "" << endl;
        cout << i.first << endl;
        cout << setfill(' ');
        for(auto& j : i.second){
            row1 << setw(formatWidth) << left << j.getItemId() <<setw(formatWidth) << right << j.getEquipmentName() << " | ";
            row2 << setw(formatWidth) << left << "Cost: $" <<setw(formatWidth) << right << j.getBaseCost() << " | ";
            row3 << setw(formatWidth) << left << "Quantity: " <<setw(formatWidth) << right << j.getQuantity() << " | ";
        }
        cout << "\t" << row1.str() << "\n";
        cout << "\t" << row2.str() << "\n";
        cout << "\t" << row3.str() << "\n";
        row1.str("");
        row2.str("");
        row3.str("");
        row4.str("");
        cout << "\n";
    }
}

Inventory::~Inventory(){}




