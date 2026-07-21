#include<iostream>
using namespace std;
int revnum(int n,int r){
    if(n == 0)
        return r;
    return revnum(n/10,r*10+(n%10));
}
int rev(int n){
    return revnum(n,0);
}
int main()
{
    int n = 5557;
    cout << rev(n)<< endl;
    return 0;
}