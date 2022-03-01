#ifndef IOWA_H
#define IOWA_H
#include <iostream>
using namespace std;

class Iowa
{
private:
    int miles,pound,clothes,ammo,spare,food,group,money,updateMiles,updatePound,updateClothes,updateAmmo,updateSpare,updateFood, updatedOx,updateGroup,updateMon;
    string state;
public:
    Iowa();
    bool challenge();
    ~Iowa();
};

#endif // IOWA_H
