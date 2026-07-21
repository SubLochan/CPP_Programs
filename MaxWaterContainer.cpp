#include<iostream>
using namespace std;
int main()
{
    int n = 9,w,h,mx = 0,area;
    int arr[9] = {1,8,6,2,5,4,8,3,7};
    // for(int i = 0 ; i < n ; i++){
    //     for(int j = i+1 ; j < n ;j++){
    //         w = j - i;
    //         h = min(arr[i],arr[j]);
    //         area = w*h;
    //         mx = max(mx,area);
    //     }
    // }
    int l = 0 , r = n-1;
    while(l < r){
        w = r - l;
        h = min(arr[l],arr[r]);
        area = w*h;
        mx = max(mx,area);
        if(arr[l] < arr[r]){
            l++;
        }
        else{
            r--;
        }
    }
    cout << mx << endl;
    return 0;
}