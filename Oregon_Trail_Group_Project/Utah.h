#ifndef UTAH_H
#define UTAH_H

#include <iostream>
#include "User.h"
using namespace std;

class Utah:public User{
    public:
    Utah();
    bool challenge();

};

#endif