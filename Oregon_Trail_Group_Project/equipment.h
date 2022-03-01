#include <iostream>
#ifndef EQUIPMENT_H
#define EQUIPMENT_H
#include <string>
#include <sstream>

using namespace std;

class Equipment
{
private:
    string _equipmentName, _equipmentDescription;
    int _quantity, _itemId;
    double _durability;
    double _baseCost;
public:
    Equipment();
    Equipment(string);
    Equipment(string, string,int, double, double);
    void setEquipmentName(string);
    void setEquipmentDescription(string);
    void setQuantity(int);
    void setItemId(int);
    void setDurability(double);
    void setBaseCost(double);
    string getEquipmentName();
    string getEquipmentDescription();
    int getQuantity();
    int getItemId();
    double getDurability();
    double getBaseCost();
    string displayCell();
    ~Equipment();
};

//struct Inventory{
//    Equipment food;
//    Equipment wagon;
//    Equipment horses;
//    Equipment weapon;
//    Equipment ammo;
//    Equipment cloths;
//};

#endif // EQUIPMENT_H
