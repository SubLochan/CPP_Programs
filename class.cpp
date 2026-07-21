#include<iostream>
using namespace std;

class Pakkalocal {
public:
    void fun() {
        cout << "Go to Temple";
    }
};

int main() {
    Pakkalocal k;
    k.fun(); // Call the fun method
    return 0;
}
