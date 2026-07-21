//Custom Maps based on Size Key,value Pair
#include <iostream>
#include <map>
using namespace std;
map <string,int> Det;
int n,val;  string k;
void mapping(int n)
{
    while(n--)
    {   cin>>k;
        cin>>val;
        Det[k]=val;
    }
}
int main()
{
    cin>>n;
    mapping(n);
    for(const auto& [k,v]:Det)
    {
        cout<<k<<":"<<v<<endl;
    }
    return 0;
}