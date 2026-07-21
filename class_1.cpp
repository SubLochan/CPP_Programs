#include<iostream>
using namespace std;
class Demo
{
    public:
    int num1,num2;
    void sum (int a,int b)
    {
        cout<<a+b;
    }
};
int main()
{
    class Demo k;
    cout<<"Enter Num1: "; cin>>k.num1;
    cout<<"Enter Num2: "; cin>>k.num2;
    k.sum(k.num1,k.num2);
    return 0;
}