#include<iostream>
class Jimmy
{
    public:
    int k;
    Jimmy()// Constructor
    {
        k=5;
        std::cout<<k;
    }
    ~Jimmy() = default;
}; // object
int main()
{
    Jimmy* J = new Jimmy();
    delete J;
    return 0;
}