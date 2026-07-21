#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="Helllo",s2="World";
    cout<<s1.length()<<"\n";
    cout<<s2.length()<<"\n";
    cout<<s1.append(s2);
    return 0;
}