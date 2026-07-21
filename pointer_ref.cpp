#include<iostream>
using namespace std;
int main()
{
    int var=55;
    int &ref=var;
    cout<<"Value of var: "<<var<<endl;
    cout<<"Value of ref: "<<ref<<endl;
    return 0;
}