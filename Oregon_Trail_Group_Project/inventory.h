#ifndef INVENTORY_H
#define INVENTORY_H
#include "equipment.h"
#include "gamelogic.h"
#include <iostream>
#include <iomanip>
#include <array>
#include <vector>
#include <map>
#include <string>
#include <sstream>
#include <algorithm>
class Inventory
{
private:
    string _foodLabel = "Food",
        _wagonLabel = "Wagon",
        _horseLabel = "Horses",
        _weaponLabel = "Weapon",
        _ammoLabel = "Ammo",
        _clothsLabel = "Cloths";
    int _gridId;
    vector <Equipment> _food;
    vector <Equipment> _wagon;
    vector <Equipment> _horses;
    vector <Equipment> _weapon;
    vector <Equipment> _ammo;
    vector <Equipment> _cloths;
    map <string, vector<Equipment>> _inventoryRow;

public:
    Inventory();
    Inventory(int);
    void genrateFoodVec();
    void genrateWagonVec();
    void genrateHorsesVec();
    void genrateWeaponVec();
    void genrateAmmoVec();
    void genrateClothsVec();
    void setFood();
    void setWagon();
    void setHorses();
    void setWeapon();
    void setAmmo();
    void setCloths();
    void generateBaseUserInventory();
    void generateInventory(string, vector<Equipment> &item);
    void userMakePurchase();
    void displayInventory();
    ~Inventory();
};

#endif // INVENTORY_H
