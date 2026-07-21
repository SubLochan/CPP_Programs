#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i;
    vector <int> k;
    k.push_back(5);
    k.push_back(9);
    k.push_back(12);
    k.push_back(99);
    k.pop_back();
    k.shrink_to_fit();
    for(i=0;i<k.size();i++)
    {
        cout<<k[i]<<endl;
    }

    return 0;
}