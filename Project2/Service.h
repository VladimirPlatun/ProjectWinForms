#pragma once
#include <string>

using namespace std;

class Service {
protected:
    string name;
    string description;
    float price;
    int duration; // в минутах
public:
    Service(string n, string desc, float p, int dur) : name(n), description(desc), price(p), duration(dur) {}

    string getName() const { return name; }
};

