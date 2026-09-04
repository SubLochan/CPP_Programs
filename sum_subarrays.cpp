#include<iostream>
#include<vector>
using namespace std;
int main()
{
      vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
      int s = 0 , n = arr.size(), mx =0, mn = 0;
      for(int i = 0 ; i < n ; i++){
        for(int j = i ; j < n ; j++){
            s += arr[j];
            mx = max(mx,s);
            mn = min(mn,s);
            // cout << "Sum of SubArray [" << arr[i] << "," << arr[j] << "] = " << s << endl;
        }
      }
      cout << "Max Sum: " << mx << " **---** " << "Min Sum: " << mn << endl;

      return 0;
}