#ifndef UTAH_H
#define UTAH_H
#include <iostream>
using namespace std;

class Utah
{
private:
    int ammo;
    int updateAmmo;
public:
    Utah();
    bool challenge();
    ~Utah();
};

#endif // UTAH_H
