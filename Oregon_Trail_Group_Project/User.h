
#include <iostream>
#include <string>
using namespace std;


class User {
    public:
    int miles,pound,clothes,ammo,spare,food,group,money,updateMiles,updatePound,updateClothes,updateAmmo,updateSpare,updateFood,updateGroup,updateMon;
    string state;

    //Setters
    void setMiles(int);
    void setPound(int);
    void setClothes(int);
    void setAmmo(int);
    void setSpare(int);
    void setFood(int);
    void setGroup(int);
    void setMoney(int);

    string getState();
    int getMiles();

    virtual bool challenge() = 0;

    int upMiles();
    int upPound();
    int upClothing();
    int upAmmo();
    int upSpare();
    int upFood();
    int upGrouping();
    int upMoney();
}
