#include "equipment.h"

Equipment::Equipment(){}

Equipment::Equipment(string eqName){
//    _itemId = itemId;
    _equipmentName = eqName;
    _equipmentDescription = "";
    _itemId = -1;
    _quantity = 0;
    _durability = 0;
    _baseCost = 0;
}

Equipment::Equipment(string eqName, string eqDesc, int qty, double durability, double baseCost)
{
    _equipmentName = eqName;
    _equipmentDescription = eqDesc;
    _quantity = qty;
    _durability = durability;
    _baseCost = baseCost;
}

void Equipment::setEquipmentName(string eqName){
    _equipmentName = eqName;
}

void Equipment::setEquipmentDescription(string eqDesc){
    _equipmentDescription = eqDesc;
}

void Equipment::setQuantity(int qty){
    _quantity = qty;
}

void Equipment::setItemId(int id){
    _itemId = id;
}

void Equipment::setDurability(double durability){
    _durability = durability;
}

void Equipment::setBaseCost(double baseCost){
    _baseCost = baseCost;
}

string Equipment::getEquipmentName(){
    return _equipmentName;
}

string Equipment::getEquipmentDescription(){
    return _equipmentDescription;

}

int Equipment::getQuantity(){
    return _quantity;
}

int Equipment::getItemId(){
    return _itemId;
}

double Equipment::getDurability(){
    return _durability;

}

double Equipment::getBaseCost(){
    return _baseCost;
}

string Equipment::displayCell(){
    stringstream equipItem;
    equipItem << getItemId() << ") " << getEquipmentName() << " : " << getBaseCost() << " | ";
    return equipItem.str();
}

Equipment::~Equipment(){};
















