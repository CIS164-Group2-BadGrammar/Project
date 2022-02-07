#include <iostream>
#ifndef PERSON_H
#define PERSON_H
#include <map>
#include <string>

using namespace std;

class Person
{
private:
    string firstName;
    string lastName;
    double health;
    int age;
    map<double, string> skills;
public:
    Person();
    Person(string, string, int);
    void setFirstName(string);
    void setLastName(string);
    void setHealth(double);
    void setAge(int);
    void setSkills(double, string);
    string getFirstName();
    string getLastName();
    void display();
    ~Person();
};

#endif // PERSON_H
