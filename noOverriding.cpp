#include <iostream>
using namespace std;


class baseClass {
public:
    virtual void perkenalan() final{
        cout << "Hai Kids saya Function dari base Class";
    }
};

class derivedClass : public baseClass {
public:
    void perkenalan1() {
        cout << "HaY Kids saya Function dari derived class";
    }
};

int main() {
    derivedClass a;
    a.perkenalan1();

    return 0;
}