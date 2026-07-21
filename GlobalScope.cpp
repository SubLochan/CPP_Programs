#include<iostream>
using namespace std;
int glob=55;
int print()
{
    //int loc=57;
    cout<<glob<<endl;
    cout<<loc<<endl;
    return 0;
}
int main()
{
    int loc=57;
    cout<<glob<<endl;
    cout<<loc<<endl;
    print();
    return 0;
}