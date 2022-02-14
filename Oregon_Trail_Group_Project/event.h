#include <iostream>
#ifndef EVENT_H
#define EVENT_H
#include <string>

using namespace std;

class Event
{
private:
    string _eventName;
    string _eventDescription;
    bool _eventType; //good == true, bad == false;
    double _healthEffect; //effect on health
    double _inventoryEffect; //lose or gain of goods by percent
    int _travelEffect; //delay/shortcut for travel
public:
    Event();
    Event(bool, double, double, int);
    void setEventName(string);
    void setEventDescription(string);
    void setEventType(bool);
    void setHealthEffect(double);
    void setInventoryEffect(double);
    void setTravelEffect(int);
    string getEventName();
    string getEventDescription();
    bool getEventType();
    double getHealthEffect();
    double getInventoryEffect();
    int getTravelEffect();
    string display();
    ~Event();
};

#endif // EVENT_H
