#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int>l1;
    int x;
    while(cin>>x){
        l1.push_back(x);
    }
    for(int k : l1)
        cout << k << " ";
        return 0;
}