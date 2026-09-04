#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Solution {
public:
    void fun(vector<int> v1,vector<int> v2 , int n){
        vector<bool>chk(false,n+11);
        map<int,int>mp;
        for(int i = 0 ; i < v1.size() ; i++){
            mp[v1[i]] = v2[i];
        }
        for(auto [k,v] : mp){
            cout << k << " : " << v << endl;
        }
    }
};
int main()
{
    int n = 10, m = 3;
    vector<int>v1 = {1,2,5};
    vector<int>v2 = {5,7,9};
    Solution sol;
    sol.fun(v1,v2,n);
    return 0;
}