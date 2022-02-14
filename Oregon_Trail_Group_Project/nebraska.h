#ifndef NEBRASKA_H
#define NEBRASKA_H

#include <iostream>
using namespace std;

class Nebraska
{
private:
    int _miles;
    string _state;
    int _updateAmmo;
    int _updateClothes;
    int _updateFood;
    int _updateGroup;
    int _updateMon;

public:
    Nebraska();
    bool challenge();
    ~Nebraska();
};

#endif // NEBRASKA_H
