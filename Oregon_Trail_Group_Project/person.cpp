#include "person.h"
#include <string>
using namespace std;
Person::Person()
{
    firstName = "";
    lastName = "";
}

Person::Person(string f, string l, int a)
{
    firstName = f;
    lastName = l;
    age = a;
}

void Person::setFirstName(string first){
        firstName = first;

}

void Person::setLastName(string last){
        lastName = last;
}


string Person::getFirstName(){
        return firstName;
}


string Person::getLastName(){
        return lastName;
}



Person::~Person(){}

void Person::display(){
    cout << "###############################################" << endl;
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Age: " << age << endl;
    cout << "###############################################" << endl;
}
