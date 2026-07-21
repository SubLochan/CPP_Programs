#include<iostream>
using namespace std;
class Parent1{
    public:
    void display()
    {
        cout<<"Parent class"<<endl;
    }
};
class Parent2{
    public:
    void fun()
    {
        cout<<"Parent2 class"<<endl;
    }
};
class Child : public Parent1,public Parent2{
    public:
    Child()
    {
        cout<<"Child class"<<endl;
    }
};
int main()
{
   Child P;
    P.display();
    P.fun();
    return 0;
}