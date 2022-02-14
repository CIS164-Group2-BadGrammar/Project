#include "person.h"
#include "gamelogic.h"
#include <string>
using namespace std;
Person::Person()
{
    _firstName = "";
    _lastName = "";
    _age = 0;
    _health = -1;

}

Person::Person(string f, string l, int a)
{
    _firstName = f;
    _lastName = l;
    _age = a;
    setHealthInital(a);
}

void Person::setFirstName(string first){
    _firstName = first;
}

void Person::setLastName(string last){
    _lastName = last;
}

void Person::setAge(int age){
    _age = age;
    if(_health == -1){
        setHealthInital(_age);
    }
}

void Person::setHealthInital(int age){
    int healthBuff = -10; //neg to change rand func to pos
    int healthHelper = 100-age;
    GameLogic healthRand;
    _health = healthRand.getRandomNumber(healthHelper, healthBuff);
}

void Person::setHealthEvent(double e){
    _health = e;
}

string Person::getFirstName(){
    return _firstName;
}


string Person::getLastName(){
    return _lastName;
}

int Person::getAge(){
    return _age;
}

double Person::getHealth(){
    return _health;
}

Person::~Person(){}

void Person::display(){
    cout << "###############################################" << endl;
    cout << "First Name: " << getFirstName() << endl;
    cout << "Last Name: " << getLastName() << endl;
    cout << "Age: " << getAge() << endl;
    cout << "Health " << getHealth() << endl;
    cout << "###############################################" << endl;
}
