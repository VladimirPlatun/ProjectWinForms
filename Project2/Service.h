#pragma once
#include <string>

using namespace System;

public ref class Service {
public:
    String^ Name;
    String^ Description;
    float Price;
    int Duration; // в минутах
public:
    Service(String^ n, String^ desc, float p, int dur) : Name(n), Description(desc), Price(p), Duration(dur) {}

    String^ getName() { return Name; }
};
