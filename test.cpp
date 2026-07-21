#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int rev(int n)
    {
        stack<int>stk;
        while(n > 0){
            stk.push(n % 10);
            n /= 10;
        }
        int res = 0;
        while(!stk.empty()){
            res = res * 10 + stk.top();
            stk.pop();
        }
        return res;
    }
int main()
{
    int res = rev(526);
    cout << res << endl;
}
 