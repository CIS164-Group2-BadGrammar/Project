#include <iostream>
#ifndef EQUIPMENT_H
#define EQUIPMENT_H
#include <string>

using namespace std;

class Equipment
{
private:
    string _equipmentName;
    string _equipmentDescription;
    double _durability;
public:
    Equipment();
    Equipment(string, string,double);
    void setEquipmentName(string);
    void setEquipmentDescription(string);
    void setDurability(double);
    string getEquipmentName();
    string getEquipmentDescription();
    double getDurability();
    string display();
    ~Equipment();
};

#endif // EQUIPMENT_H
