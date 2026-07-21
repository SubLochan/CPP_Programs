#include<iostream>
using namespace std;
int main()
{
    int n = 7;
    int arr[7] = {3,-4,5,4,-1,7,-8};
    // string str = "abcd";
    // int n = str.length();
    //print all subarrays of the given array
    // for(int i = 0 ; i < n ; i++){
    //     for(int end = i ; end < n ; end++){
    //         for(int st = i ; st <=end ;st++){
    //             cout << arr[st];
    //         }
    //         cout <<" ";
    //     }
    //     cout << endl;
    // }

    //SubArray Sum
    int mx = INT_MIN , curr;
    for(int st = 0 ; st < n ; st++){
        curr =0;
        for(int end = st ; end < n ; end++){
            curr+=arr[end];
            mx = max(mx,curr);
        }
    }
    cout << mx << endl;
    return 0;
}