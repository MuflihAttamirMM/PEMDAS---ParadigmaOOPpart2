#include <iostream>
using namespace std;


class baseClass {
public:
    virtual void perkenalan() final{
        cout << "Hai Kids saya Function dari base Class";
    }
};