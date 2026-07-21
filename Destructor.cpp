#include<iostream>
using namespace std;
class Jimmy
{
    public:
    Jimmy()
    {
        cout<<"Hello"<<endl;
    }
    ~Jimmy()
    {
        cout<<"I am Dead Inside";
    }
};
int main()
{
    Jimmy k;
    return 0;
}