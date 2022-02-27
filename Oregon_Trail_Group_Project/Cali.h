#ifndef CALI.H
#define CALI.H

#include <iostream>
#include "User.h"
using namespace std;

class California: public User{
    public:
    California();
    bool challenge();
};
#endif
