#include<iostream>
#include<algorithm>
using namespace std;
class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.length() == 1){
            return s;
        }
        else{
            sort(s.begin(),s.end());
            while(next_permutation(s.begin(),s.end()))
            {
                if(Pal(s)){
                    continue;
                    break;
                }
            }
        }
        return s;
    }

    bool Pal (string s){
        int l = 0 , r = s.length() - 1;
        while(l < r){
            if(s[l] == s[r]){
                return true;
            }
            l++;
            r--;
        }
        return false;
    }
};

int main()
{
    Solution sol;
    cout << sol.smallestPalindrome("babab") << endl; // "abbba"
    cout << sol.smallestPalindrome("daccad") << endl; // "acddca"
    return 0;
}