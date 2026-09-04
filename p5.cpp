#include<iostream>
#include<deque>
#include<vector>
using namespace std;
int main()
{
    int n = 8;
    vector<int> arr = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    deque<int>dq;   vector<int> res;
    

    for(int i = 0 ; i < k ; i++){
        dq.push_back(arr[i]);
        while(dq.size() > 0 && arr[dq.back()] <= arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }

    for(int i = k ; i < n ; i++){
        res.push_back(arr[dq.front()]);
        while(dq.size() && dq.front() <= i -k){
            dq.pop_front();
        }
         while(dq.size() > 0 && dq.back() <= arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    res.push_back(arr[dq.front()]);

    return 0;
}