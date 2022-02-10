#ifndef NEBRASKA_H
#define NEBRASKA_H

#include <iostream>
#include "User.h"
using namespace std;

class Nebraska: public User{
    public:
    Nebraska();
    bool challenge();
};
#endif
