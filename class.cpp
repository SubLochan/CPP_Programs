#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;



int main() {
    vector<int>arr = {1,2,2,11,11,11,15,6};
    unordered_map<int,int>mp;
    for(int el : arr){
        mp[el]++;
    }

    for(auto [k,v] : mp){
        cout << k << " : " << v << endl;
    }

    return 0;
}
