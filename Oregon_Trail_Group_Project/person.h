#include <iostream>
#ifndef PERSON_H
#define PERSON_H
#include <map>
#include <string>

using namespace std;

class Person
{
private:
    string _firstName, _lastName;
    double _health;
    int _age;
    bool _isNpc;
    map<double, string> skills;
public:
    Person();
    Person(string, string, int, bool);
    void setFirstName(string);
    void setLastName(string);
    void setHealthInital(int);
    void setHealthEvent(double);
    void setAge(int);
    void setSkills(double, string);
    string getFirstName();
    string getLastName();
    int getAge();
    double getHealth();
    void display();
    ~Person();
};

#endif // PERSON_H
