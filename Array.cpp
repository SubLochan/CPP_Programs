#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,5> k={10,20,30,40,50};
    cout<<k.at(4)<<endl;
    cout<<k.front()<<endl;
    cout<<k.back()<<endl;
    cout<<k.size()<<endl;
    cout<<(k.empty()? "True":"False")<<endl;
    return 0;
}