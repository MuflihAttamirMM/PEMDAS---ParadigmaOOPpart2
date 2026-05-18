#include <iostream>
using namespace std;

class remoteLampu {
    private:
        string saklarNo[5];
public:
    void setSaklarNo(int i, string value) {
        saklarNo[i] = value;
    }
    string setSaklarNo(int i) {
        return saklarNo[i];
    }
};

int main() {
    remoteLampu lampuRumah;
}