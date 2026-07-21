#include<iostream>
#define Red 100
using namespace std;
class Demo
{
    public:
    int color;
    void SetColorToRed()
    {
        this->color=Red;
        cout<<color;
    }

}k;
int main()
{
    k.SetColorToRed();
    return 0;
}