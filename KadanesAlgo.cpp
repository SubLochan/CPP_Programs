#include<iostream>
using namespace std;
int main()
{
    int n =7, cur = 0;
    int mx = INT_MIN;
    int arr[7] = {3,-4,5,4,-1,7,-8};
    for(int i = 0 ; i < n ; i++){
        cur += arr[i];
        mx = max(mx,cur);
        if(cur < 0){
            cur = 0;
        }
    }
    cout << mx << endl;
    return 0;
}